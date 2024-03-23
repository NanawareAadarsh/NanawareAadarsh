/**
  *
  * FILE   :- mv_pattern_06
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
     0 |  *  
     1 |  *  *  
     2 |  *  *  *  
     3 |  *  *  *  *  
     4 |  *  *  *  *  *


ALGORITHM :-
           
         This pattern has 5 Rows and 5 Columns therefor,  
           
           1) Ole is start from 0 and stop at < 5 (OLE is used to control no. of Rows)
           2) Ile is start from 0 and stop at <= ole  (ILE is used to control no. of Columns)
           3) In this pattern we have to print half pyramid of star(*) , ile <= ole it will  space also 
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

// Entry poin 

 void mv_pattern_06()
 {
   // Declaration statement
   int ile,ole;

   // starting of the loop

    ole = 0; // initialization of row
    while (ole < 5) // condition for row
    {
       ile = 0; // initialization of cloumn
        while (ile <= ole) // condition for column
        {
           printf("* ",ile); // printing the star(*)
           ile++; // incrementing the column
        }
          // after the ile the number of star(*) are incremented by 1
         printf("\n");// to continue in next line
        ole++; // incrementing the row
    
    // End of the loop
    }
 }

