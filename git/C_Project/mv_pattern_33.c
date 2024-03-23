
/*
  * FILE   :- mv_pattern_33
  * BRIEF  :- Demonstration of PATTERN using C programing language
  * AUTHOR :- Nanaware Aadarsh (nanawareaadarsh7@gmail.com)
  * DATE   :- 18-October-2023

  */

/*
 
 PATTERN :-
   
   OLE |
 (Rows)|ILE (Columns) 
       |  0  1  2  3  4  5  6  7  8
_______|_______________________________
     1 |  5                     5
     2 |     4               4
     3 |        3          3
     4 |          2     2
     5 |             1


   ALGORITHAM:-
          This pattern have 5 roes and 9 column therefor,
          1) ole is start from 1 and end at <= 5(ole is used as rows)
          2) ile  is start from 1 and end at <= ole (ile is used as columns) for the printing the space
          3) ile is start from < 9 and end at >=ole to print the number
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
---------------------------------------------------------------------------------------------------------*/


// Heders 

#include<stdio.h>
#include<stdlib.h>

#include"pattern_header_04.h"

// Global data defination

 int ole,ile,number=5;
 
 // entry point
void mv_pattern_33()
{
     // staring of the loop
for(ole = 1; ole<=5; ole++)// initialization ; condition ; incrementing of row 
{

for(ile = 1;ile<=ole; ile++)// initialization ; condition ; incrementing of column to print space 
{

 printf("   "); // printing the space 

}

for(ile = 9; ile>=ole*2-1; ile--) //  initialization ; condition ; incrementing the column to print the numbers
{

if(ile==9 || ile ==ole*2-1) // setting the condition to print the numbers
{
printf(" %d ",number); // printing the numbers  
} 
else // 2nd condition 
{
printf("   ");  // print space
}
} 
number=number-1; // this will print number  - 1 in next row
printf("\n"); // to continue in next line 
}
}