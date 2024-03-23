/**
  *
  * FILE   :- mv_pattern_15
  * BRIEF  :- Demonstration of PATTERN using C programing language
  * AUTHOR :- Nanaware Aadarsh (nanawareaadarsh7@gmail.com)
  * DATE   :- 7-November-2023

  */

/*
 
 PATTERN :-
   
   OLE |
 (Rows)|ILE (Columns) 
       |  0  1  2  3 
 ______|________________
     0 |           3
     1 |        2  3
     2 |     1  2  3
     3 |  0  1  2  3
     4 |     1  2  3
     5 |        2  3
     6 |           3



  ALGORITHAM :-
               in this pattern there are 7 Row and 4 Cloumns therfore ,
               1)ole is start from 0 and end at <7 (ole is use as Rows)
               2)ile is start from 0 and end at <7 (ile is used as Column)
               3) To print this pattern we are using a AARAY of Pattern which has member of Numbers 0,1,2,3
               4) we are using a for loop to peint this pattern
                     syntax for for loop:-
                                            for(initialization ; condition ; increment/decrement)
                                             {
                                                      // BLOCK OF LOOP
                    
                                              }
      
-------------------------------------------------------------------------------------------------------------------------------------------------------------*/
// Headers
#include <stdio.h>
#include<stdlib.h>

#include"pattern_header_02.h"

// Entry point Function 

void mv_pattern_15()
 {
    char pattern[7][7] =
     {
        {' ', ' ', ' ', ' ', ' ', ' ', '3'},
        {' ', ' ', ' ', ' ', ' ', '2', '3'},
        {' ', ' ', ' ', ' ', '1', '2', '3'},
        {' ', ' ', ' ', '0', '1', '2', '3'}, // HERE WE ARE TAKIN THE ARRAY OF PATTERN WHICH HAS MEBERS AS NUMBERS 0,1,2,3
        {' ', ' ', ' ', ' ', '1', '2', '3'},
        {' ', ' ', ' ', ' ', ' ', '2', '3'},
        {' ', ' ', ' ', ' ', ' ', ' ', '3'}
    };
 

    // Printing the pattern
    // Starting of the loop
    for (int ole = 0; ole < 7; ole++) // initialization , condition , incremnting the no. of Rows(ole)
     {
        for (int ile = 0; ile < 7; ile++) // initialization , condition , incremnting the no . of Columns(ile)
         {
            printf("%c ", pattern[ole][ile]); // Here we are printing the numbers with the help of AARAY of pattern[ole][ile]
        }
        printf("\n"); // to continue in next line 
    } // End of the loop 

   
}