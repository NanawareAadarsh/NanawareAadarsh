/**
  *
  * FILE   :- mv_pattern_11
  * BRIEF  :- Demonstration of PATTERN using C programing language
  * AUTHOR :- Nanaware Aadarsh (nanawareaadarsh7@gmail.com)
  * DATE   :- 17-October-2023

  */

/*
 
 PATTERN :-
   
   OLE |
 (Rows)|ILE (Columns) 
       |  0  1  2  3 
 ______|________________
     0 |  *
     1 |  *  *
     2 |  *  *  *
     3 |  *  *  *  *
     4 |  *  *  *
     5 |  *  *
     6 |  *


ALGORITHM :-
           
          This patter has 7 Rows and 4 Columns therefor
           
           1) Ole is start from 0 and stop at < 4 in 1st part
           2) ole is start from 3 and stop at >=1 in 2nd part (OLE is used to control no. of Rows)
           3) Ile is start from 0 and stop at <= OLE in 1st part
           4)  ile is start from 1 and stop at <= ole (ILE is used to control no. of Columns)
           5) In this pattern we are printing the star(*) , the ile <= ole it wil be rint space also
           6) we are considering the pattern in 2 parts 
           7) 1st loop wiil be print first part :- 
                                                   *
                                                   *  *
                                                   *  *  * 
                                                   *  *  *  *

           8) And 2nd loop will be print second part :-
                                                       *  *  *
                                                       *  *
                                                       *

           9) we are using the while loop to print this pattern,
               Syntax of While loop :-
                                      (Initialization)
                                      while(condition)
                                       {
                                           // BLOCK OF LOOP
                                       
                                          INCREMENT/DECREMENT
                                       }

/***********************************************************************************************************************/

// Headers
#include<stdio.h>
#include<stdlib.h>

#include"pattern_header_02.h"

// Entry point

void mv_pattern_11()
{
  // Declaration Statement
  int ile,ole;

  // Starting of the loop

// 1st part
  ole = 0; // initialization of row in 1st part
  while (ole < 4) // condition for row in 1st part
  {
     ile = 0; // initialization of column in 1st part
     while (ile <= ole) // condition for column in 1st part
     {
       printf("* ",ile);// printing the star(*) in 1st part
       ile++; // incrementing the column in 1st part
     }
     printf("\n"); // to continue in next ilne
     ole++; // incrementing the row in 1st part
  }

/*--------------------------------------------------------------------------------------------------*/
   
// 2nd part 
   ole = 3; // initialization of row in 2nd part
   while (ole >= 1) // condition for row in 2nd part
   {
      ile = 1; // initialization of column in 2nd part
      while (ile <= ole)  // condition for column in 2nd part
      { 
        printf("* ",ile); // printing the star(*) in 2nd part
        ile++; // incrementing the column in 2nd part

      }
      printf("\n");// continuein next ilne
      ole--; // decrementing the roe in 2nd part
   
  // End of the loop
   }
 }