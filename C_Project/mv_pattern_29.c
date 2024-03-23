/**
  *
  * FILE   :- mv_pattern_27
  * BRIEF  :- Demonstration of PATTERN using C programing language
  * AUTHOR :- Nanaware Aadarsh (nanawareaadarsh7@gmail.com)
  * DATE   :- 18-October-2023

  */

/*
 
 PATTERN :-
   
   OLE |
 (Rows)|ILE (Columns) 
       |  0  1  2  3  4  5  6  7  8
 ______|_______________________________
       |            
     0 |  E  E  E  E  E  E  E  E  E            
     1 |     D  D  D  D  D  D  D 
     2 |        C  C  C  C  C 
     3 |           B  B  B
     4 |              A



  ALGORITHM :-
              This pattern have 5 rows and 9 columns therefor,

              1) ole is start from 0 and end at < 5 
              20 ile  is start from 0 and end at ile < ole for print the space
              3)  ile is start from 1 and end at  ile < 9 - 2 * ole  for print the characters
              4) we are using for loop to print this pattern,
                   syntax of for loop :- 
                                        for(initialization ; condition ; increment/ decrement)
                                           {
                                                // BLOCK OF LOOP
                                           }

-------------------------------------------------------------------------------------------------------------------------------------------*/


// Headers 
#include <stdio.h>
#include<stdlib.h>

#include"pattern_header_03.h"


// Entry point 

void  mv_pattern_29() 
{
    // starting of the loop 

    for (int ole = 0; ole < 5; ole++) // initialization ; condition ; incrementing of row 
     {
        // Add spaces for indentation
        for (int ile = 0; ile < ole; ile++)  // initialization ; condition ; incrementing of columns to print spaces 
        {
            printf("  "); // printing indentation/space 
        }

        // Print the character (starting from 'E' and decreasing)
        char character = 'E' - ole;
        for (int ile = 0; ile < 9 - 2 * ole; ile++)//initialization ; condition ; incremening of columns to print characters  
        {
            printf(" %c", character); // printing charactes start with 'E'
        }

        printf("\n"); // to continue in next line 
    }

    
}