/**
  *
  * FILE   :- mv_pattern_17
  * BRIEF  :- Demonstration of PATTERN using C programing language
  * AUTHOR :- Nanaware Aadarsh (nanawareaadarsh7@gmail.com)
  * DATE   :- 5-November-2023

  */

/*
 
 PATTERN :-
   
   OLE |
 (Rows)|ILE (Columns) 
       |  1  2  3  4  5
 ______|________________
     1 |  1  2  3  4  5
     2 |     1  2  3  4 
     3 |        1  2  3
     4 |           1  2 
     5 |              1



 ALGORITHAM :-

             This pattern has 5 Rows and 5 columns Therefore
             1) Ole is start from 1 and stop at <= 5 (ole is used for control the no. of  Rows)
             2) Ile is start from 1 and stop at ile<=ole for printing the space (ile is used for control the no. of Columns)
             3) ile<=6-ole is used for printing a number in a sequence 
             3) In this pattern we are printing the pattern of Numbers
             4) ile <= ole it help us to print space in the pattern
             5) For print this pattern we are using For loop ,
               syntax of for loop :-
                                      for (Initialization;condition;upadatation(incrementing/decrementing))
                                      {
	                                        // BLOCK OF  LOOP
                                      }

/*******************************************************************************************************************/

// headers 

#include<stdio.h>
#include<stdlib.h>

#include"pattern_header_02.h"

// Entry point Function 
void mv_pattern_19()
{
	// Decleration Statment
	int ile , ole ;

	// Starting of the loop
for(ole = 1; ole <=5; ole++) // initialization , condtioin , incrementing the no. of Rows(ole)  
  {
    for(ile = 1; ile<=ole; ile++) // initialization , condition , incrementing the no. of Columns(ile)
    {
      printf("  "); // here we are printing the space
    }

      for(ile = 1 ; ile <= 6-ole; ile++) // initialization , condition , incrementing the no. of  Columns(ile)
      {
        printf(" %d",ile); // Here we are printing the Numbers in patern
      }

    printf("\n"); // to continue in next line
  }

  
}