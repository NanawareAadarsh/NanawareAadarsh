/**
  *
  * FILE   :- mv_pattern_07
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
     0 |  1  
     1 |  1  2
     2 |  1  2  3
     3 |  1  2  3  4
     4 |  1  2  3  4  5


ALGORITHM :-
           
         This pattern has 5 Rows and 5 Columns therefor,  
           
           1) Ole is start from 0 and stop at < 5 (OLE is used to control no. of Rows)
           2) Ile is start from 0 and stop at <= OLE (ILE is used to control no. of Columns)
           3) In this pattern we are printing the half pyramid of number , the ile <= ole it wil be rint space also 
           4) we are using the while loop to print this pattern,
               Syntax of While loop :-
                                      (Initialization)
                                      while(condition)
                                       {
                                           // BLOCK OF LOOP
                                       
                                          INCREMENT/DECREMENT
                                       }

***************************************************************************************************************/

 // Header 

#include<stdio.h>
#include<stdlib.h>

#include"pattern_header_01.h"

// Entry point 

void mv_pattern_07()
{
   // Declaration statement
   int ile,ole;

    // Starting the loop

   ole = 0;     // Initialization of row
   while (ole < 5) // condition for row
   {
     ile = 0; // initialization of column
     while (ile <= ole)  // condition for column
      {
          printf("%d ",ile+1); // printing the number
          ile ++; // incrementing the column

      } // after this part next number will be added in next column  
      printf("\n");// to continue in next line
      ole++; // incrementing the row
   
   // Ending of the loop
   }
}