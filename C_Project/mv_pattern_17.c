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
       |  0  1  2  3  4
 ______|________________
     0 |  *  *  *  *  *
     1 |     *  *  *  * 
     2 |        *  *  *
     3 |           *  *
     4 |              *



 ALGORITHAM :-

             This pattern has 5 Rows and 5 columns Therefore
             1) Ole is start from 0 and stop at <= 4 (ole is used for control the no. of  Rows)
             2) Ile is start from 0 and stop at <= 4 (ile is used for control the no. of Columns)
             3) In this pattern we are printing the pattern of Asterisk(*)
             4) ile <= ole it help us to print space in the pattern
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
void mv_pattern_17()
{  //Starting of the loop

for(int ole = 0; ole <=4; ole++) // Initiaization , condition , incrementing of the row (ole)  

{
 
for(int ile = 0; ile<=ole; ile++) // Inizitalization , condition , incrementing of the column(ile)

{

printf("  "); // here we are printing thee space     

}
 
for(int ile= 4 ; ile>= ole; ile--) //Intialization , condition , decrementing of the column (ile) for printing the asterisk(*)
{

printf(" *"); // Printing the asterisk in pattern

}

printf("\n"); // to continu in next line   

}  // end of the loop

}
