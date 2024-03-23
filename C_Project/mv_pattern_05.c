

/**
  *
  * FILE   :- mv_pattern_05
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
     0 |  1  1  1  1  1
     1 |  A  B  C  D  E
     2 |  *  *  *  *  *
     3 |  A  B  C  D  E
     4 |  1  1  1  1  1


ALGORITHM :-
           
         This pattern has 5 Rows and 5 Columns therefor,  
           
           1) Ole is start from 0 and stop at < 5 (OLE is used to control no. of Rows)
           2) Ile is start from 0 and stop at < 1 TO print the number ,alphabet,star(*) in a Diffrent  Row 
            (ILE is used to control no. of Columns)
           3) To print this pattern we are taking the while loop for an each Row
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

//Entry point
 void mv_pattern_05()
 {
   // Declaration statement
   int i=1,ile,ole,var,alphabet=65;

   // Starting the loop
    
     // This loop is print  1 1 1 1 1 in 1st Row
     ole = 0;       // Initializatin of   row
     while (ole < 5)  // condition for  row
     {
        ile = 0;  // initialization of  column
        while (ile < 1) // condition for  column
        {
        printf("%d ",i); // printing the number
        ile++; // incrementing the   column
     }
      
     ole++;// incrementing the  row
 }
  
   printf("\n");// to continue in next line
/*-----------------------------------------------------------------------------------------------------------------*/  
   
   // This loop is print A B C D E in 2nd row
    
    ole = 0; // intialization of  row
    while (ole < 5) // condition for  row
     {
        ile = 0; // initialization of  column
        while (ile < 1) // conditon for column
        {
           printf("%c ",alphabet); // printing the alphabet 
           alphabet++; // incrementing the alphabet
           ile++; // incrementing the column
        }
        ole++; // incrementing the  row
     }
  
    printf("\n"); // to continue in next line 
/*-------------------------------------------------------------------------------------------------------------------*/
  
  //  This loop is print * * * * * in 3rd row
    ole = 0; // initialization of row
    while (ole < 5) // condition for row
    {
       ile = 0; // initialization of column
        while (ile < 1) // condition for column
        {
          printf("* ",ile); // printing the star(*) 
          ile++; // incrementing the column
        }
        ole++; // incrementing the row 
    }

     printf("\n");// to continue in next line 
/*---------------------------------------------------------------------------------------------------------------------*/
  
   // This loop is print A B C D E in 4th row
     
     var = alphabet; // here we are cosidering the var = alphabet means value of alphabet is stored in var  
     ole = 0;       // Intialization of row 
     while (ole < 5) // condition for row 
     {
        ile = 0;   // Initialization of column
        while (ile < 1) // condition for column
        {
           printf("%c ",var - 5); // printing the alphabet
           var++;  // incrementing the alphabet
           ile++;  // incrementing the column
        }
        ole++; // incrementing the row
     }

      printf("\n"); // to continue in next line
/*----------------------------------------------------------------------------------------------------------------------*/      
  
      // This loop is print  1 1 1 1 1 in 5th row
      
      ole = 0; // initialization of row
      while (ole < 5) // condition for row 
      {
       ile = 0; // initialization of column 
        while (ile < 1) // condition for column 
        {
            printf("%d ",i);// printing the Number 
            ile++; // incrementing the column
        }
        ole++; // incrementig the  row 
  // End of the loop
      }
  }