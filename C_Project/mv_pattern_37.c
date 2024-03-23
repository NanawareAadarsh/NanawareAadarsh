/*
  * FILE   :- mv_pattern_37
  * BRIEF  :- Demonstration of PATTERN using C programing language
  * AUTHOR :- Nanaware Aadarsh (nanawareaadarsh7@gmail.com)
  * DATE   :- 5-November-2023

  */

/*
 
 PATTERN :-
   
   OLE |
 (Rows)|ILE (Columns) 
       |  1  2  3   4   5  6  7  8  9
 ______|__________________________________
       |
     1 |  
  	 2 |		     	1
     3 |		    2		2
     4 | 	    3		3		3
   	 5 |	 4		4		4		4
     6 | 5	 	5		5		5		5
 

   ALGORITHAM:-
          This pattern have 5 roes and 9 column therefor,
          1) ole is start from 1 and end at <= 5(ole is used as rows)
          2) ile  is start from 1 and end at >= ole (ile is used as columns) for the printing the space
          3) ile is start from = 5 and end at <=ole to printing the numbers
          4) we are using a for loop to print this pattern
           syntax for for loop:-
                for(initialization ; condition ; increment/decrement)
                {
                    // BLOCK OF LOOP
                    
                }
-------------------------------------------------------------------
*/




//HEADER 
#include<stdio.h> 
#include<stdlib.h>

#include"pattern_header_04.h" 

// Entry point Function 
void mv_pattern_37()
{

 // Starting of the loop
for(int ole =1; ole<=5; ole++) // Initialization , condition , incrementing the no. of row(ole)
{

for(int ile = 5; ile>=ole; ile--) // Initialization , condition , decrementing the no. of column(ile)
{
printf("   "); 	// here we are printing the space 
} 
for(int ile = 1; ile<=ole; ile++) // Initializatiopn , condition , incrementing the no. of column(ile)  for printing the number
{

printf("%d     ",ole); 	// Here we are printing the numbers in pattern
}
printf("\n"); // to continue in next line 
}

}