

/*
  * FILE   :- mv_pattern_40
  * BRIEF  :- Demonstration of PATTERN using C programing language
  * AUTHOR :- Nanaware Aadarsh (nanawareaadarsh7@gmail.com)
  * DATE   :- 20-October-2023

  */

/*
 
 PATTERN :-
   
   OLE |
 (Rows)|ILE (Columns) 
       |  1  2  3  4  5  6  7  8  9
 ______|_____________________________
     1 |  5     5     5      5     5
     2 |      4     4     4     4
     3 |         3    3      3
     4 |            2     2  
     5 |               1        


   ALGORITHAM:-
          This pattern have 5 roes and 9 column therefor,
          1) ole is start from 1 and end at <= 5(ole is used as rows)
          2) ile  is start from 1 and end at <= ole (ile is used as columns) for the printing the space
          3) ile is start from = 5 and end at >=ole to printing the numbers
          
          4)after ile loop we are decrementing the number as 
           number-- to dcrement the number to print
        
          
            
         5) we are using a for loop to print this pattern
           syntax for for loop:-
                for(initialization ; condition ; increment/decrement)
                {
                    // BLOCK OF LOOP
                    
                }
-------------------------------------------------------------------
*/
// Headres 
#include<stdio.h>
#include<stdlib.h>

#include"pattern_header_04.h"

/// Entry poin function

void mv_pattern_40()
{ 
    // global data defination
    int num=5;
    
    // starting of the loop
    
  for(int ole =1; ole<=5;ole++) // initialization ; condition ; incrementing the row 
    {
      for(int ile=1;ile<=ole;ile++) // increenting ; condition ;incrementing the column to print the space
        {
          printf("  "); // printing the space
        }
      for(int ile=5;ile>=ole;ile--) // initialization ; condition ; decrementing the colimns  to print the number in descending order
        {
          printf(" %d  ",num);// printing the number 
        }
        num--; // decrementing the number tp print
      printf("\n"); // to continue in next line
    }
  
}