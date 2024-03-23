/*
  * FILE   :- mv_pattern_34
  * BRIEF  :- Demonstration of PATTERN using C programing language
  * AUTHOR :- Nanaware Aadarsh (nanawareaadarsh7@gmail.com)
  * DATE   :- 20-October-2023

  */

/*
 
 PATTERN :-
   
   OLE |
 (Rows)|ILE (Columns) 
       |  0  1  2  3  4  5  6  7  8
_______|______________________________
     1 |  E                       E
     2 |     D                 D
     3 |        C           C
     4 |          B      B
     5 |              A


   ALGORITHAM:-
          This pattern have 5 roes and 9 column therefor,
          1) ole is start from 1 and end at <= 5(ole is used as rows)
          2) ile  is start from 1 and end at <= ole (ile is used as columns) for the printing the space
          3) ile is start from = 9 and end at >=ole to printing the alphabet
          4) we are taking alphabet = 'E' to print the startingof the pattern
          5)after ile loopwe are decrementing the alpabhet as alphabet = alphabet-1 to print new alphabet
         4) here we are taking a condition a to print a pattern used of Branching statement(if,else)
          
         s) syntax for Branching statement :-
                 if(condition)
                 {
                     // true block
                 }
                 else
                 {
                     // false block
                 }         
         6) we are using a for loop to peint this pattern
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


//  Entry point
void mv_pattern_34()
{
// code


// Global data defination 
char alphabet = 'E';

// starting of the loop
for(int ole = 1; ole<=5; ole++) // initialization ; condition ; incrementing the row
{

for(int ile = 1; ile<=ole; ile++)  // initialization ; condition ; incrementing the column to print the space
{

printf("   ");  // printing the space

}

for( int ile = 9; ile>=ole*2-1; ile--) // incrementing ; condition; decrementing the column to print the space or alpabet 
{

if(ile==9 || ile ==ole*2-1) // seeting the condition  to print the alphabet
{
printf(" %c ",alphabet); // printing the alphabet 
} 
else  // 2nd condition if condition falls then it will return the 2nd condition 
{
printf("   ");  // printg the space
}
} 
alphabet=alphabet-1;  // we are decrementing the alphabet to print second alphabet in next row
printf("\n"); // to continue in next line 
}

}