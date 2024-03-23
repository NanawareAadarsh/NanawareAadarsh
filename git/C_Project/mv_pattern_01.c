/**
  *
  * FILE   :- mv_pattern_01
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
     0 |  *  *  *  *  *
     1 |  *  *  *  *  *
     2 |  *  *  *  *  *
     3 |  *  *  *  *  *
     4 |  *  *  *  *  *


ALGORITHM :-
           
         This pattern has 5 Rows and 5 Columns therefor,  
           
           1) Ole is start from 0 and stop at < 5 (OLE is used to control no. of Rows)
           2) Ile is start from 0 and stop at < 5 (ILE is used to control no. of Columns)
           3) we are using the while loop to print this pattern,
               Syntax of While loop :-
                                      (Initialization)
                                      while(condition)
                                       {
                                           // BLOCK OF LOOP
                                       
                                          INCREMENT/DECREMENT
                                       }

***************************************************************************************************************/

   // Code to print this pattern
  // Headers

  #include<stdio.h>
  #include<stdlib.h>

  #include"pattern_header_01.h"

 // Entry point 
  void mv_pattern_01()
  {
     // Declration statement
     int ile,ole;

      // start point of loop
       ole = 0;                   //Intialization for rows
      while (ole < 5)           //condition for rows
      {
        ile = 0;               // Intialization for columns 
        while (ile < 5)       //condition for columns 
        {
            printf("* ");  // printing the star(*)
            ile++;          // Incrementing the Num,ber of column 
        }
        ole++;              // Incrementing  the Number of row
        printf("\n");// To continue in Next line
// End point of loop
    }
  }


