

/*
  * FILE   :- mv_pattern_36
  * BRIEF  :- Demonstration of PATTERN using C programing language
  * AUTHOR :- Nanaware Aadarsh (nanawareaadarsh7@gmail.com)
  * DATE   :- 20-October-2023

  */

/*
 
 PATTERN :-
   
   OLE |
 (Rows)|ILE (Columns) 
       |  0  1  2  3  4  5  6  7  8
_______|_____________________________
     1 |              A          
     2 |           B     B   
     3 |        C           C
     4 |      D               D
     5 |    E                    E


   ALGORITHAM:-
          This pattern have 5 roes and 9 column therefor,
          1) ole is start from 1 and end at <= 5(ole is used as rows)
          2) ile  is start from 5 and end at >= ole (ile is used as columns) for the printing the space
          3) ile is start from = 1 and end at <=ole*2-1to printing the alphabets
          
          5)after ile loop we are incrementing the alphabet as 
          alphabet = alphabet+1 to print new ALPHABET
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
void mv_pattern_36()
{

// code
 // Global data defination
char alphabet ='A'; 


for(int ole = 1; ole<=5; ole++) // intialization ; condition ; incrementing the row
{

for(int ile = 5; ile>=ole; ile--) // initialization ; condition ; decrementing the coumn to print the space 
{

printf("  ");  // printing the space

}

for(int ile = 1; ile<=ole*2-1; ile++) // initialization ; condition ; incrementing the column to print the number
{

if(ile ==1 || ile ==ole*2-1) // seeting the condition to print the number
{
printf("%c  ",alphabet); // printing the alphabet  
} 
else // 2nd condition if the first condition is false then it wil return the 2nd condition 
{
printf("  ");  // printing the space
}
} 
alphabet = alphabet+1; // here we are printg the alphabet as alphabet+1 in next row
printf("\n") ;// to continue in next line; 

}

}