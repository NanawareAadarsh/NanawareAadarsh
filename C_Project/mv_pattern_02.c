/**
  *
  * FILE   :- mv_pattern_02
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
     0 |  A  A  A  A  A
     1 |  B  B  B  B  B
     2 |  C  C  C  C  C
     3 |  D  D  D  D  D
     4 |  E  E  E  E  E


ALGORITHM :-
           
         This pattern has 5 Rows and 5 Columns therefor,  
           
           1) Ole is start from 0 and stop at < 5 (OLE is used to control no. of Rows)
           2) Ile is start from 0 and stop at < 5 (ILE is used to control no. of Columns)
           30 In this pattern we have to print a alphabet A to E so we are taking the ASCII value of that Alphabet
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

void mv_pattern_02()
{
  // Declaration statement

  int ile,ole,ch=65; // 65 is  a ASCII value of A alphabet and we are assigning to ch to print

  // start point of loop
   ole = 0;       // Initialization for row
   while (ole < 5)  // condition for rows
   {
      // loop for row
    ile = 0;    // Initialization for column
     while (ile < 5) // condition for column
     { 
       // loop for column 
      printf("%c ",ch); // printing the Alphabet
      ile++;   // Incrementing the Number  of column
     }
     printf("\n");  // To continue in Next line
     ole++;     // Incrementing the Number of rows
     printf("\n");
     ch++;      // here we incrementing the ASCII value of alphabet to print the pattern
   // end poin of loop
   }
}