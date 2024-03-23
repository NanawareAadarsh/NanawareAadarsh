/**
  *
  * FILE   :- mv_pattern_16
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
     0 |              *
     1 |           *  * 
     2 |        *  *  *
     3 |     *  *  *  *
     4 |  *  *  *  *  *



 ALGORITHAM :-

             This pattern has 5 Rows and 5 columns Therefore
             1) Ole is start from 0 and stop at <= 4 (ole is used for control the no. of  Rows)
             2) Ile is start from 0 and stop at <= 4 (ile is used for control the no. of Columns)
             3) In this pattern we are printing the pattern of Asterisk(*)
             4) ile >= ole it help us to print space in the pattern
             5) For print this pattern we are using For loop ,
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

// Entry point Function

void mv_pattern_16()
{ 
	 // Staring of the loop
for(int ole = 0; ole <=4; ole++) // Initialization , condition , incrementing of the row(ole)
{
for(int ile = 4; ile>=ole; ile--) // Initialization , condition , decrementing of the column (ile)
{

printf("   "); // Heree we are printing the space 

}
 
for(int ile= ole ; ile>=0; ile--) // Initialization , condition , decremening of the column(ile ) to print the asterisk(*)
{

printf(" * ");  // Printing the asterisk(*) in pattern

}

printf("\n");   // to continue in next line 

} // End of the loop

}