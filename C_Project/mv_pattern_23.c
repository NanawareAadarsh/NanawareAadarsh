
/**
  *
  * FILE   :- mv_pattern_23
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
     0 |              A
     1 |           A  A  A
     2 |        A  B  A  B  A
     3 |     A  B  C  A  C  B  A
     4 |  A  B  C  D  E  D  C  B  A



  ALGORITHM :-
              This pattern have 5 rows and 9 columns therefor,

               1) ole is start from 0 and end at < 5 
               2) ile is start from 0 and  end at < 5 - ole - 1 for the printing space before characters
               3) ile  is start at 0 and end at ile <= ole to print the character in ascending order
               4) ile is start at ole - 1  and end at ile >= ole for print the characters in descending order 
               5)  we have to take one conditoin to print space  (ile < ole )
               6) the branching statement are used to take condition (if , else statement) 
               7) syntax for branching statement :-
                                                  
                                                   if(condition )
                                                   {
	                                                 // True block
                                                   }
                                                   else
                                                   {
	                                                // False block
                                                   }

               8) we are using for loop to print this pattern,
                   syntax of for loop :- 
                                        for(initialization ; condition ; increment/ decrement)
                                           {
	                                            // BLOCK OF LOOP
                                           }
----------------------------------------------------------------------------------------------------------------------------------------- */                                                

                                                   

    // Headers                                               

#include <stdio.h>
#include<stdlib.h>

#include"pattern_header_03.h"

// Entry point function
void  mv_pattern_23() 
{
      // Set the number of rows (change as needed)
    for (int ole = 0; ole < 5; ole++) // intialization ; condition ; incremeting the column
     {
        // Print spaces before the characters
        for (int ile = 0; ile < 5 - ole - 1; ile++) // Intialization ; condition ; incrementing the column  to print the space
        {
            printf("  "); // printing the space
        }

        // Print characters in ascending order
        for (int ile = 0; ile <= ole; ile++) // Intialization ; condition ; incrementing the column for printing the characters in ascending order  
         {
            printf("%c", 'A' + ile); // printing the characters in ascendng order

            if (ile < ole) // setting the conditoin to print
             {
                printf(" ");// printing the space
            }
        }

        // Print characters in descending order (excluding the first character)
        for (int ile = ole - 1; ile >= 0; ile--)  // Initialization ; condition ;decrementing the column to print the characters in descending order
        {
            printf(" %c", 'A' + ile); // printing the characters in descending order
        }

        printf("\n"); // to continue in next line
    }
    
}