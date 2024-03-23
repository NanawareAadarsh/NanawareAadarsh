/*
  * FILE   :- mv_pattern_46
  * BRIEF  :- Demonstration of PATTERN using C programing language
  * AUTHOR :- Nanaware Aadarsh (nanawareaadarsh7@gmail.com)
  * DATE   :- 20-October-2023

  */

/*
 
 PATTERN :-
   
   OLE |
 (Rows)|ILE (Columns) 
       | 0  1   2   3   4   5   6   7   8   9  10  11  12
       |______________________________________________________
     0 | *	*	*	*	*	*	*	*	*	*	*	*	*
     1 | *	*	*	*	*	*		*	*	*	*	*	*
     2 | *	*	*	*	*				*	*	*	*	*
     3 | *	*	*	*						*	*	*	*
     4 | *	*	*								*	*	*
 	 5 | *	* 										*	*
     6 |*												*
 */
 /*  ALGORITHAM:-
          This pattern have 7 rows and 13 column therefor,
          1) ole is start from 0 and end at < 7(ole is used as rows)
          2) ile  is start from 0 and end at < 13 (ile is used as columns) for the printing the space
         3) to print this pattern we are seeting a condition to print a star(*) in pattern
         4)we can set the conditioin from / with Branching statement (if,else)
         5) syntax for Branching statement:-
         if(condition) // firast condition
         {
             // true block;
         }
         else  // 2nd / optionaal condition 
         {
             // false block
         }
          
         5) we are using a for loop to peint this pattern
           syntax for for loop:-
                for(initialization ; condition ; increment/decrement)
                {
                    // BLOCK OF LOOP
                    
                }
-------------------------------------------------------------------
*/
// Headres 
// Headers
#include <stdio.h>
#include <stdlib.h>

#include"pattern_header_05.h"

// Global Data Definition



// Entry Point 

void mv_pattern_46()
{
	// Code
	 // starting of the code

	for( int ole = 0; ole < 7; ++ole )	// Outer loop that controls ROWS
	{
		
		for( int ile = 0; ile < 13; ++ile )	// Initialization ; condition ; incrementing of column to print a star(*;
		{
           // seeting a condition to print spaces
		
			if(7-ole<=ile && ile<=5+ole )
			
			  {  
			      printf("  "); // printing the space
			  }
			  
			else// 2nd condition / conditoin for printing the star(*)
			{
				printf("* "); // printing the star(*)
			}

		

		}
		printf("\n"); // to continue in next line 

	}

	
}