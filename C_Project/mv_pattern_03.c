/**
  *
  * FILE   :- mv_pattern_03
  * BRIEF  :- Demonstration of PATTERN using C programing language
  * AUTHOR :- Nanaware Aadarsh (nanawareaadarsh7@gmail.com)
  * DATE   :- 16-October-2023

  */

/*
 
 PATTERN :-
   
   OLE |
 (Rows)|ILE (Columns) 
       |  0  1  2  3  4 
 ______|________________
     0 |  5  4  3  2  1
     1 |  5  4  3  2  1
     2 |  5  4  3  2  1
     3 |  5  4  3  2  1
     4 |  5  4  3  2  1


ALGORITHM :-
           
         This pattern has 5 Rows and 5 Columns therefor,  
           
           1) Ole is start from 0 and stop at < 5 (OLE is used to control no. of Rows)
           2) Ile is start from 5 and stop at >=1 (ILE is used to control no. of Columns)
           3) In this pattern we have to print in descendig order therefor we are taking ile=5 & ile>=1
           4) we are using the while loop to print this pattern,
               Syntax of While loop :-
                                      (Initialization)
                                      while(condition)
                                       {
                                           // BLOCK OF LOOP
                                       
                                          INCREMENT/DECREMENT
                                       }

***************************************************************************************************************/

// Headers

#include<stdio.h>
#include<stdlib.h>

#include"pattern_header_01.h"

// Entry point
 void mv_pattern_03()
 {
  // Declration statement

   int ile,ole;

   //Starting point of loop
     ole = 0;         //Initialization of row
     while (ole < 5)  //condition for row
       {
         // loop for row
        ile = 5;     // Initialization of column
        while (ile >= 1) // condition for column
        {
          printf("%d ",ile); // printg the Number
          
          ile--; // Decrementing the Numbers
        }
        printf("\n");// To continue in Next line 
        ole++; // incrementing Number of rows
       }
 }