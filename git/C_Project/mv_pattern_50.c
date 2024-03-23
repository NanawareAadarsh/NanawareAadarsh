

/*
  * FILE   :- mv_pattern_50
  * BRIEF  :- Demonstration of PATTERN using C programing language
  * AUTHOR :- Nanaware Aadarsh (nanawareaadarsh7@gmail.com)
  * DATE   :- 20-October-2023

  */

/*
 
 PATTERN :-
   
   OLE |
 (Rows)|ILE (Columns) 
       |  0  1  2  3  4  5  6  7  8  9  10  11  12
_______|_______________________________________________
     
     0 |  A                   G  F  E  D  C   B  A  
     1 |  A   B                  F   E  D  C  B  A
     2 |  A   B  C                   E  D  C  B  A
     3 |  A   B  C  D                   D  C  B  A
     4 |  A   B  C  D  E                   C  B  A      
     5 |  A   B  C  D  E  F                   B  A
     6 |  A   B  C  D  E  F  G                   A  
     7 |  A   B  C  D  E  F                   B  A 
     8 |  A   B  C  D  E                   C  B  A
     9 |  A   B  C  D                   D  C  B  A
    10 |  A   B  C                   E  D  C  B  A      
    11 |  A   B                   F  E  D  C  B  A   
    12 |  A                    G  F  E  D  C  B  A

   ALGORITHAM:-
          This pattern have 14 rows and 13 column therefor,
          this part is divide in 2 parts :-

       1st part:-   
                   This pattern have 7 rows and 13 column therefor,
          1) ole is start from 0 and end at < 7(ole is used as rows)
          2) ile  is start from 0 and end at < 13 (ile is used as columns) for the printing the space
          3) to print this pattern we are seeting a condition to print a alphabet in pattern
          4) this pattern will print  half part of the pattern :-   
                                                              A                   G  F  E  D  C   B   A  
                                                              A   B                  F   E  D  C  B   A
                                                              A   B  C                   E  D  C  B   A
                                                              A   B  C  D                   D  C  B   A
                                                              A   B  C  D  E                   C  B   A      
                                                              A   B  C  D  E  F                   B   A
                                                              A   B  C  D  E  F  G                    A


 2nd part :-
           This pattern have 7 rows and 13 column therefor,
          1) ole is start from 1 and end at < 7(ole is used as rows)
          2) ile  is start from 0 and end at < 13 (ile is used as columns) for the printing the space
          3) to print this pattern we are seeting a condition to print a alphabet in pattern
          4) this pattern will  print reamaning part of the pattern :-
                                                                       
                                                                     A  B  C  D  E  F                  B  A 
                                                                     A  B  C  D  E                  C  B  A
                                                                     A  B  C  D                  D  C  B  A
                                                                     A  B  C                  E  D  C  B  A      
                                                                     A  B                  F  E  D  C  B  A   
                                                                     A                  G  F  E  D  C  B  A

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
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

// Headres 
// Headers
#include <stdio.h>
#include <stdlib.h>

#include"pattern_header_05.h"

// Global Data Definition

char ch3 = 0;

// Entry Point 

void mv_pattern_50()
{
	// Code
	 // starting of the code
	// 1st part

	for( int ole = 0; ole < 7; ++ole )	// Outer loop that controls ROWS
	{
		ch3 = 'A';
		for( int ile = 0; ile < 13; ++ile )	// Initialization ; condition ; incrementing of column to peint a alphabet;
		{
           // seeting a condition to print spaces
		
			if(1+ole<=ile && ile<=5+ole ) // seating a condition for printing the alhabets
			
			  {  
			   
			     printf("  ");  // Here we are printing the space  
			 }
			
			else// 2nd condition / conditoin for printing the Alphabet
			{
				printf(" %c", ch3); // printing the alphabet
			}

			if( ile < 6 ) // seeting a condition for when a alphaet have to increment or decrement
			{
				ch3++; // incrementing the alphabet
			}
			else // 2nd condition 
			{
				ch3--; // decrementing the alphabet when condition is false
			}

		}
		printf("\n"); // to continue in next line 



	}

/*-----------------------------------------------------------------------------------------------------------------------------------------------------------*/
// 2nd part
for( int ole = 1; ole < 7; ++ole )	// Outer loop that controls ROWS
	{
		ch3 = 'A';
		for( int ile = 0; ile < 13; ++ile )	// Initialization ; condition ; incrementing of column to peint a alphabet;
		{
           // seeting a condition to print spaces
			if(7 - ole <= ile && ile <=11- ole )
			{
				printf("  "); // printing the spaces
			}
			else// 2nd condition / conditoin for printing the Alphabet
			{
				printf(" %c", ch3); // printing the alphabet
			}

			if( ile < 6 ) // seeting a condition for when a alphaet have to increment or decrement
			{
				ch3++; // incrementing the alphabet
			}
			else // 2nd condition 
			{
				ch3--; // decrementing the alphabet when condition is false
			}

		}
		printf("\n"); // to continue in next line 

	}
	
}
