
/**
  *
  * FILE   :- mv_pattern_08
  * BRIEF  :- Demonstration of PATTERN using C programing language
  * AUTHOR :- Nanaware Aadarsh (nanawareaadarsh7@gmail.com)
  * DATE   :- 17-October-2023

  */

/*
 
 PATTERN :-
   
   OLE |
 (Rows)|ILE (Columns)
       |  0  1  2  3  4  
 ______|________________
     0 |  A   
     1 |  A  B  
     2 |  A  B  C  
     3 |  A  B  C  D
     5 |  A  B  C  D  E


ALGORITHM :-
           
         This pattern has 5 Rows and 5 Columns therefor,  
           
           1) Ole is start from 0 and stop at < 5 (OLE is used to control no. of Rows)
           2) Ile is start from 0 and stop at <= OLE (ILE is used to control no. of Columns)
           3) In this pattern we have to print a half pyramid of alphabets ,ile<= ole it wil be calulated space also
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

// Entry poit 
 void mv_pattern_08()
 {
    // Declaratin statement 
    int ile,ole,ch=65; // 65 is a ASCII value of 'A' alphabet which is assign to ch to print

    // Staarting of the loop

     ole = 0;// initialization of row
     while(ole < 5)// condition for row
     {
      ile = 0; // initializatio of column
       while (ile <= ole) // condition for column
        {
           printf("%c ",ch);// printing the alphabet
           ile++; // incrementing the column

        }
        printf("\n");// to continue in next line
        ch++;// incrementin a ASCII value by incrementing ch
        ole++;// incrementing the row
     
  // End of the loop
     }
 }