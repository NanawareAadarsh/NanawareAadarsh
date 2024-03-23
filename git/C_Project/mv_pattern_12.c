
/**
  *
  * FILE   :- mv_pattern_12
  * BRIEF  :- Demonstration of PATTERN using C programing language
  * AUTHOR :- Nanaware Aadarsh (nanawareaadarsh7@gmail.com)
  * DATE   :- 17-October-2023

  */

/*
 
 PATTERN :-
   
   OLE |
 (Rows)|ILE (Columns) 
       |  0  1  2  3 
 ______|________________
     0 |  D
     1 |  C  D  
     2 |  B  C  D  
     3 |  A  B  C  D
     4 |  B  C  D
     5 |  C  D 
     6 |  D


ALGORITHM :-
           
          This patter has 7 Rows and 4 Columns therefor,
           
           1) Ole is start from 4 and stop at >= 1 for 1st part
           2)  ole is start from 2 and stop at <= 4  (OLE is used to control no. of Rows)
           3) Ile is start from ile = ole  and stop at <= 4 for 1st and 2nd part
           (ILE is used to control no. of Columns)
           4) In this pattern we are printing the alphabets , the ile <= ole it wil be print space also
           5) we are considering the pattern in 2 parts 
           6) 1st loop wiil be print first part :- 
                                                   D
                                                   C  D
                                                   B  C  D 
                                                   A  B  C  D

           6) And 2nd loop will be print second part :-
                                                       B  C  D
                                                       C  D
                                                       D

           7) we are using the while loop to print this pattern,
               Syntax of While loop :-
                                      (Initialization)
                                      while(condition)
                                       {
                                           // BLOCK OF LOOP
                                       
                                          INCREMENT/DECREMENT
                                       }

/****************************************************************************************************************/

// Headers
#include<stdio.h>
#include<stdlib.h>

#include"pattern_header_02.h"

// Entry point 

void mv_pattern_12()
{
	 // Declaration statement 
	 int ile,ole;

	 // Starting the loop

	 // 1st part 
	 ole = 4;  // initialization of row in 1st part
	 while  (ole >= 1) // condition for row in 1st part
	 {
	  ile = ole ; // initialization of column in 1st part
	  while (ile <= 4) // condition for column in 1st part
	   {
	      printf("%c ",65+ile-1); // printing the alphabet in 1st part (65 is a ASCCI value of 'A',65+ile(4)-1 = 68 is a ASCII value of 'D')
	      ile++;// incrementing the column in 1st part
	   }
	   printf("\n");// to continue in next line
	   ole--; // decrementing the row in 1st part
	 }
/*--------------------------------------------------------------------------------------------------------------------------------------------*/
 // 2nd part
  
   ole = 2; // initializatoin of row in 2nd part
   while (ole <= 4) // condition for row in 2nd part 
   {
   	 ile = ole; // intialization of column in 2nd part
   	  while (ile <= 4) // condition for column in 2nd part
   	  {
   	  	 printf("%c ",65+ile-1);// printing the alphabet in 2nd part (65 is a ASCCI value of 'A',65+ile(4)-1 = 68 is a ASCII value of 'D')
   	  	 ile++;
   	  }
   	  printf("\n"); // to continue in next line 
   	  ole++;  // imcrementing the row in 2nd part
  // End of the loop
   }
} 