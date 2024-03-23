/**
  *
  * FILE   :- mv_pattern_18
  * BRIEF  :- Demonstration of PATTERN using C programing language
  * AUTHOR :- Nanaware Aadarsh (nanawareaadarsh7@gmail.com)
  * DATE   :- 5-November-2023

  */

/*
 
 
 PATTERN :-
   
   OLE |
 (Rows)|ILE (Columns) 
       |  0  1  2  3  4
 ______|________________
     0 |              1
     1 |           2  2 
     2 |        3  3  3
     3 |     4  4  4  4
     4 |  5  5  5  5  5


 ALGORITHAM :-

             This pattern has 5 Rows and 5 columns Therefore
             1) Ole is start from 0 and stop at <= 5 (ole is used for control the no. of  Rows)
             2) Ile is start from 0 and stop at <= 5 (ile is used for control the no. of Columns)
             3) In this pattern we are printing the pattern of Numbers
             4) ile >= ole it help us to print space in the pattern
             5) we are taking +ole for printing the numbers from 1 to 5 
             6) For print this pattern we are using For loop ,
               syntax of for loop :-
                                      for (Initialization;condition;upadatation(incrementing/decrementing))
                                      {
	                                        // BLOCK OF  LOOP
                                      }

/*******************************************************************************************************************/


// Headers
#include<stdio.h>
#include<stdlib.h>

#include"pattern_header_02.h"

//Entry point Function 
void mv_pattern_18()
{  
	//starting of the loop 
  int ile , ole;
  int number = 1;

for(ole = 1; ole <=5; ole++) // initialization , condition , incremanting of the row (ole) 
{
for(ile = 5; ile>= ole; ile--) // Initialization , condtion , decrementing of the column (ile)
{

printf("  "); // here we are printing the space     

}
 
for(ile= 1 ; ile<= ole; ile++) // initialization , condition ,incrementing of the colummn (ile)
{

printf(" %d",ole); // printg the Number in the pattern 

}

number++;  // incremnting the Number

printf("\n");   // to continue in nxt line 

} // End of the loop

}