/*
  * FILE   :- mv_pattern_31
  * BRIEF  :- Demonstration of PATTERN using C programing language
  * AUTHOR :- Nanaware Aadarsh (nanawareaadarsh7@gmail.com)
  * DATE   :- 18-October-2023

  */

/*
 
 PATTERN :-
   
   OLE |
 (Rows)|ILE (Columns) 
       |  0  1  2  3  4  5  6  7  8
  _____|______________________________
       |            
     0 | *                        *
     1 |    *                   *
     2 |       *             *
     3 |          *       *
     4 |              *     


   ALGORITHAM:-
          This pattern have 5 roes and 9 column therefor,
          1) ole is start from 0 and end at < 5(ole is used as rows)
          2) ile  is start from 0 and end at < 9 (ile is used as columns)
         3) here we are taking a condition a to print a pattern used of Branching statement(if,else)
          
         4) syntax for Branching statement :-
                 if(condition)
                 {
                     // true block
                 }
                 else
                 {
                     // false block
                 }         
         5) we are using a for loop to peint this pattern
           syntax for for loop:-
                for(initialization ; condition ; increment/decrement)
                {
                    // BLOCK OF LOOP
                    
                }
-------------------------------------------------------------------*/


// Heders 

#include<stdio.h>
#include<stdlib.h>

#include"pattern_header_04.h"

// Entry point function

void mv_pattern_31()
{
    
    // starting of the loop
    
    
    for(int ole = 0; ole < 5; ++ole) // intialization ; condition ; incrementing the row to print the star(*)
    {
         for(int ile = 0; ile < 9; ++ile ) // initialization ; condition ; incrementing the column to print the star(*)
         {
             if(ole == ile || ile == 8-ole) // seeting the condition to print the star(*)
              {
                  printf("*  "); //  printing the star(*)
              }
              else   // 2nd conditon
              {
                  printf("  "); // printg the space 
              }
         }
          printf("\n"); // to contiue in next line
    } 

 }