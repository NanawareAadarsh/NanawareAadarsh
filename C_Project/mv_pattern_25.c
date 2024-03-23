/**
  *
  * FILE   :- mv_pattern_25
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
     1 |              1
     2 |           3  3  3
     3 |        5  5  5  5  5
     4 |     7  7  7  7  7  7  7
     5 |  9  9  9  9  9  9  9  9  9



  ALGORITHM :-
              This pattern have 5 rows and 9 columns therefor,

              1) ole is start from 1 and end at <=5 
              20 ile  is start from 5 and end at ile > ole for print the space
              3)  ile is start from 1 and end at <= 2* ole -1 for print the numbers
              4) 2 * ole - 1 it use to print the number with +2 ...., 
              5) we are using for loop to print this pattern,
                   syntax of for loop :- 
                                        for(initialization ; condition ; increment/ decrement)
                                           {
	                                            // BLOCK OF LOOP
                                           }
-----------------------------------------------------------------------------------------------------------------*/

// Headers 


#include <stdio.h>
#include<stdlib.h>

#include"pattern_header_03.h"

// Entry point
void  mv_pattern_25() 
{
	// Starting of the code


    for (int ole = 1; ole <= 5; ole++) // Initialization ; condition ; incremeting  of the row 
    {
        for (int ile = 5; ile > ole; ile--) // intitialization ; condition ; decrementing of column  for the print a space 
        {
            printf("  "); // Print spaces
        }
        for (int ile= 1; ile <= 2 * ole - 1; ile++) // initialization ; condition ; incrementing of column for the printing the Numbers
        {
            printf("%d ", 2 * ole - 1); // Print the numbers
        }
        printf("\n"); // to continue in next line 
    }

   
}