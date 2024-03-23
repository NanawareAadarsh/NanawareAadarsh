/**
  *
  * FILE   :- mv_pattern_04
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
     0 |  E  E  E  E  E
     1 |  D  D  D  D  D
     2 |  C  C  C  C  C
     3 |  B  B  B  B  B
     4 |  A  A  A  A  A


ALGORITHM :-
           
         This pattern has 5 Rows and 5 Columns therefor,  
           
           1) Ole is start from 0 and stop at < 5 (OLE is used to control no. of Rows)
           2) Ile is start from 0 and stop at < 5 (ILE is used to control no. of Columns)
           3) In this pattern we have to print Alphabet E to A so we take the ASCII number of alphabet E 
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

void mv_pattern_04()
{
  // Declaration satement
    int ile,ole,ch=69;// ch=69 is a ASCII Number of E and we are assigning to ch to print
    
    // Starting of the loop
    ole = 0;     // Initialization of Row
  while (ole < 5)  // Conditiion for Row
  {
    ile = 0;  // Initialization of Column
    while (ile < 5) // Condition for Column
    {
      printf("%c ",ch); // printing the alphabet 
      ile++; // incremention the Column
    }
    printf("\n"); // to continue in next line
    ole++; // incremention the Row
    printf("\n"); // to continue in next line
    ch--; // decrementing the alphabet
   // endiing the loop
  }
}