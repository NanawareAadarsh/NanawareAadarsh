
/**
  *
  * FILE   :- mv_pattern_20
  * BRIEF  :- Demonstration of PATTERN using C programing language
  * AUTHOR :- Nanaware Aadarsh (nanawareaadarsh7@gmail.com)
  * DATE   :- 7-November-2023

  */

/*
 
 PATTERN :-
   
   OLE |
 (Rows)|ILE (Columns) 
       |  1  2  3  4 
 ______|________________
     1 |  D
     2 |  D  C
     3 |  D  C  B 
     4 |  D  C  B  A
     5 |  D  C  B
     6 |  D  C
     7 |  D


ALGORITHM :-
           
          This patter has 7 Rows and 4 Columns therefor
           
           1) Ole is start from 1 and stop at <=3 in 1st part
           2) ole is start from 4 and stop at >=1 in 2nd part (OLE is used to control no. of Rows)
           3) Ile is start from 1 and stop at ILE<= OLE in 1st part
           4)  ile is start from OLE and stop at ILE>=1  (ILE is used to control no. of Columns)
           5) In this pattern we are printing the Numbers , the ile <= ole it wil be rint space also
           6) we are considering the pattern in 2 parts 
           7) 1st loop wiil be print first part :- 
                                                   D
                                                   D  C
                                                   D  C  B 
                                                   

           8) And 2nd loop will be print second part :-
                                                       D  C  B  A
                                                       D  C  B
                                                       D  C
                                                       D

           9) we are using a for loop to peint this pattern
           syntax for for loop:-
                for(initialization ; condition ; increment/decrement)
                {
                    // BLOCK OF LOOP
                    
                }

/***********************************************************************************************************************/




// Headers 
#include<stdio.h>
#include<stdlib.h>

#include"pattern_header_02.h"

// Entry point Function
void mv_pattern_20()
{
    // Declaration Statment
   int ile, ole ;
   // Starting of the loop of 1st part
for(ole =1; ole<=3; ole++)    // initialization , condition , incrementing the no. of Rows(ole)
  {
    for(ile = 1 ; ile<= ole; ile++) //  initialization , condition , incremnting the no. of  Columns(ile)
    {
      printf(" %c ",'E'-ile); // printing the alphabet , we are using 'E'- 1 for printing the alphbet 
    }
    printf("\n");// to continue in next line 
  } // End of the 1st loop 
/*---------------------------------------------------------------------------------------------------*/
  // 2nd part 
  for(ole= 4;  ole>=1; ole--) // initialization , condition , decrementing the no. of Rows(ole) in 2nd part
  {
    if(ole == 4) // Seating the condition for printing the alphabet in 2nd part
    {
    for(ile= ole; ile>= 1; ile--) // initialzation , condition , incrementing the no. of Columns(ile) in 2nd part
    {
      printf(" %c ",'@'+ile); // print the aphabets using a symbol '@'
    }
     }
    else if(ole == 3) // seating the  2nd Condition 
    {
      printf(" D  C  B  "); // printing the alphabets
    }
    else if(ole == 2) // seating the 3rd condition 
    {
      printf(" D  C  "); // printing the alphabts
    }
    else // another condition 
    {
      printf(" D "); // printing the 'D' alphabets
    }
    printf("\n"); // to continue in next line 
 } 

}

