/**
  *
  * FILE   :- mv_pattern_10
  * BRIEF  :- Demonstration of PATTERN using C programing language
  * AUTHOR :- Nanaware Aadarsh (nanawareaadarsh7@gmail.com)
  * DATE   :- 17-October-2023

  */

/*
 
 PATTERN :-
   
   OLE |
 (Rows)|ILE (Columns) 
       |  1  2   3  4  5
 ______|________________
     1 |  5  4  3  2  1  
     2 |  5  4  3  2 
     3 |  5  4  3
     4 |  5  4  
     5 |  5


ALGORITHM :-
           
         This pattern has 5 Rows and 5 Columns therefor,  
           
           1) Ole is start from 1 and stop at < 5 (OLE is used to control no. of Rows)
           2) Ile is start from 5 and stop at >= OLE (ILE is used to control no. of Columns)
           3) In this pattern we are printing the half pyramid of number , the ile >= ole it wil be print space also 
           4) we are using the while loop to print this pattern,
               Syntax of While loop :-
                                      (Initialization)
                                      while(condition)
                                       {
                                           // BLOCK OF LOOP
                                       
                                          INCREMENT/DECREMENT
                                       }

/*****************************************************************************************************************/                                       


// Heders 
#include<stdio.h>
#include<stdlib.h>

#include"pattern_header_01.h"

// Entry point 

void mv_pattern_10()
{
  // Declaration statement

  int ile,ole;
  
 // Starting of the loop
  
  ole = 1; // initialization of row
 while (ole <= 5) // condition for row
 {
   ile = 5;    // initialization of column
    while (ile >= ole) // condition for column
    {
      printf("%d ",ile); // printing the number 
      ile --; // decrementing the column
    }
    printf("\n"); // to continue in next line
    ole ++; // incrementing the row
 
 // end of the loop
 }
}