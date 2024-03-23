
/**
  *
  * FILE   :- mv_pattern_14
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
     0 |           D
     1 |        C  D
     2 |     B  C  D
     3 |  A  B  C  D
     4 |     B  C  D
     5 |        C  D
     6 |           D



  ALGORITHAM :-
               in this pattern there are 7 Row and 4 Cloumns therfore ,
               1)ole is start from 0 and end at <7 (ole is use as Rows)
               2)ile is start from 0 and end at <7 (ile is used as Column)
               3) To print this pattern we are using a AARAY of Pattern which has member of Alphabets 'A','B','C','D'
               4) we are using a for loop to peint this pattern
                     syntax for for loop:-
                                            for(initialization ; condition ; increment/decrement)
                                             {
                                                      // BLOCK OF LOOP
                    
                                              }
      
-------------------------------------------------------------------------------------------------------------------------------------------------------------*/

// Heaers

#include <stdio.h>
#include<stdlib.h>

#include"pattern_header_02.h"
// Entry point Function
void mv_pattern_14() 
{
    char pattern[7][7] =  
    {
        {' ', ' ', ' ', ' ', ' ', ' ', 'D'},
        {' ', ' ', ' ', ' ', ' ', 'C', 'D'},
        {' ', ' ', ' ', ' ', 'B', 'C', 'D'},
        {' ', ' ', ' ', 'A', 'B', 'C', 'D'},    //HERE WE ARE TAKNG A AARAY OF  PATTERN WHICH HAS MEMBER 'ALPHABET' 'A' , 'B', 'C','D'
        {' ', ' ', ' ', ' ', 'B', 'C', 'D'},
        {' ', ' ', ' ', ' ', ' ', 'C', 'D'},
        {' ', ' ', ' ', ' ', ' ', ' ', 'D'}
    };

    // Printing the pattern
    // Starting  of the loop
    for (int ole = 0; ole < 7; ole++) // initialization , condtion . incremnting the no.of Rows(ole)
    {
        for (int ile = 0; ile < 7; ile++) // initialization , condition , incremnting the no. of Columns(ile)
        {
            printf("%c ", pattern[ole][ile]); // Here we are printing the alphabets with the help of AARAY of pattern[ole][ile]
        }
        printf("\n"); // to continuein next line
    } // Ending of the loop

    
}