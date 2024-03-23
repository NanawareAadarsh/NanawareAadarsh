
/**
  *
  * FILE   :- mv_pattern_22
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
     1 |           B  A  B
     2 |        C  B  A  B  C
     3 |     D  C  B  A  B  C  D
     4 |  E  D  C  B  A  B  C  D  E

 
 
 ALGORITHM :-
             This pattern has 5 ROWS and 9 COLUMNS therfore,

            1) OLE is start from 0 and end at < 5 
            2) ILE is start from 0 and end at < 5 - ole - 1 for print the space befor characters
            3) ILE is start from = ole  and end at >= 0 for printing the characters in descending order
            4) ILE is start from 1 and end at <= ole for printing the chracters in ascending order
            5) we are printig the characers with 'A' + ile
            6) we are using for loop to print this pattern 
                Syntax :- 
                         for(Initializatin ; condition ; increment/decrement)
                         {
	                         // BLOCK OF LOOP
                         }

 --------------------------------------------------------------------------------------------------------------------------------------------------------------*/


// Headers

#include <stdio.h>
#include<stdlib.h>

#include"pattern_header_03.h"

// Entry point

void mv_pattern_22() 
{  
	 // Starting of the loop
      // Set the number of rows (change as needed)
    for (int ole = 0; ole < 5; ole++)   // Intialization ; condtion ; Incrementing of the row 
     {
        // Print spaces before the first character
        for (int ile = 0; ile < 5 - ole - 1; ile++) // Intialization ; condition ; incrementing of column for print the space 
        {
            printf("  "); // printing the space
        }
        
        // Print characters in descending order 
        for (int ile = ole; ile >= 0; ile--)  // Initialization ; condition ; dercrementing the column to print the charachter in decsending order
        {
            printf("%c ", 'A' + ile);  // printing the charachters in descending order
        }
        
        // Print characters in ascending order (excluding the first character)
        for (int ile = 1; ile <= ole; ile++) // Initialization ; condition ; incrementing the column to print the characters in ascending order
        {
            printf("%c ", 'A' + ile); // printing the characters in ascending order 
        }
        
        printf("\n"); // to continue in next line
  
 // End of the loop
    }
    
}