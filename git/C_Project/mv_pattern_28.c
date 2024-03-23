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
     1 |  1  2  3  4  5  6  7  8  9            
     2 |     1  2  3  4  5  6  7
     3 |        1  2  3  4  5
     4 |           1  2  3
     5 |              1



  ALGORITHM :-
              This pattern have 5 rows and 9 columns therefor,

              1) ole is start from 1 and end at <=5 
              20 ile  is start from 1 and end at ile < ole for print the space
              3)  ile is start from 1 and end at <= 2* (5 - ole) for print the nbumbers
              4) we are using for loop to print this pattern,
                   syntax of for loop :- 
                                        for(initialization ; condition ; increment/ decrement)
                                           {
                                                // BLOCK OF LOOP
                                           }
----------------------------------------------------------------------------------------------------------------------------------------------------*/

// Headers 

#include <stdio.h>
#include<stdlib.h>

#include"pattern_header_03.h"

// Entry point 
void mv_pattern_28() 
{
    
    //starting of the loop

    for (int ole = 1; ole <= 5; ole++) // initialization ; condition ; incrementing of row 
    {
        for (int ile = 1; ile < ole; ile++) // intialization ; condition ; incrementing of column to print space
         {
            printf("  "); // Print spaces
        }
        for (int ile  = 1; ile <= 2 * (5 - ole) + 1; ile++)  // initialization ; condition ; incrementing of column to print the numbers
        {
            printf("%d ",ile); // Printing the numbers
        }
        printf("\n"); // to continue in next line
    }

    
}