
/**
  *
  * FILE   :- mv_pattern_09
  * BRIEF  :- Demonstration of PATTERN using C programing language
  * AUTHOR :- Nanaware Aadarsh (nanawareaadarsh7@gmail.com)
  * DATE   :- 17-October-2023

  */

/*
 
 PATTERN :-
   
   OLE |
 (Rows)|ILE (Columns)
       | 1   2  3  4  5  
 ______|________________
     1 |  A  A  A  A  A
     2 |  B  B  B  B
     3 |  C  C  C  
     4 |  D  D
     5 |  E


ALGORITHM :-
           
         This pattern has 5 Rows and 5 Columns therefor,  
           
           1) Ole is start from  and stop at >= 1 (OLE is used to control no. of Rows)
           2) Ile is start from 1 and stop at <= ole (ILE is used to control no. of Columns)
           3) In this pattern we have to print the downword half pyramid of alphabet ,so we have take a ASCII value of 'A' alphabet to print
           4) ole >= 1 is do  help to print the pattern (which is look like downword)
           5) ile <= ole is print the pattern with spaces 
           6) we are using the while loop to print this pattern,
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

// Entry poit 
 void mv_pattern_09()
 {
    // Declaratin statement 
    int ile,ole,ch=65; // 65 is a ASCII value of 'A' alphabet which is assign to ch to print

    // Staarting of the loop

     ole = 5;// initialization of row
     while(ole >= 1)// condition for row
     {
      ile = 1; // initializatio of column
       while (ile <= ole) // condition for column
        {
           printf("%c ",ch);// printing the alphabet
           ile++; // incrementing the column

        }
        printf("\n");// to continue in next line
        ch++;// incrementin a ASCII value by incrementing ch
        ole--;// Decrementing the row
     
  // End of the loop
     }
 }