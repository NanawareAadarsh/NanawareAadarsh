
/*
  * FILE   :- mv_pattern_39
  * BRIEF  :- Demonstration of PATTERN using C programing language
  * AUTHOR :- Nanaware Aadarsh (nanawareaadarsh7@gmail.com)
  * DATE   :- 21-October-2023

  */

/*
 
 PATTERN :-
   
   OLE |
 (Rows)|ILE (Columns) 
       |  1  2  3  4  5  6  7  8  9
 ______|_____________________________
     1 |  E     D     C      B     A
     2 |      D     C     B     A
     3 |         C     B      A
     4 |            B     A 
     5 |               A        


   ALGORITHAM:-
          This pattern have 5 roes and 9 column therefor,
          1) ole is start from 1 and end at <= 5(ole is used as rows)
          2) ile  is start from 1 and end at <= ole (ile is used as columns) for the printing the space
          3) initalization value  of ile is incrementing by 1 after an one condition  to printing the alphabet:-
                                                                                                            1)ile = 1 in first condition 
                                                                                                            2)ile = 2 in second condition 
                                                                                                            3)ile = 3 in third condition 
                                                                                                            4)ile = 4 in fourth condition
                                                                                                            5)ile = 5 in fifth condition 
        4)after an 1st condition the initialization value of ile are incrementd by 1 for printing the alphabet
             
        5) here we are taking a condition  to print a pattern used of Branching statement(if,else)       
        6) syntax for Branching statement :-
                 if(condition)
                 {
                     // true block
                 }
                 else
                 {
                     // false block
                 }   
          
            
         7) we are using a for loop to print this pattern
           syntax for for loop:-
                for(initialization ; condition ; increment/decrement)
                {
                    // BLOCK OF LOOP
                    
                }


------------------------------------------------------------------------------------------------------------------------------------*/               

// Headers 
#include<stdio.h>
#include<stdlib.h>

#include"pattern_header_04.h"

// Entry point Function 
void mv_pattern_39()
{ // Declareation Statement
	int ile , ole ;
	// Starting of the loop
	for(ole = 1; ole<=5; ole++) // initialzation , condition , incrementig the no. of Rows(ole)
  {
    for(ile = 2; ile<=ole; ile++) // initialization , condition , incrementing the no. of Columns(ile)
    {
      printf("  "); // Here we are printing the space
    }

  for(ile = 5; ile>=1; ile--) // initialization , condition  , decrementing the no. of Columns(ile) for printing the alphabets
  {
    if(ole == 1)  // seating the  1st condition for printing the alphabets
    printf("  %c ",'@'+ile); //printing the alphbet
  }

  for(ile = 4; ile>=1; ile--) // initialization , condition  , decrementing the no. of Columns(ile) for printing the alphabets
  {
    if(ole == 2)            // seating the 2nd condition for printing the alphabets
    printf("  %c ",'@'+ile); //printing the alphbet
  }

  for(ile = 3; ile>=1; ile--)// initialization , condition  , decrementing the no. of Columns(ile) for printing the alphabets
  {
    if(ole == 3)            // seating the 3rd condition for printing the alphabets
    printf("  %c ",'@'+ile); //printing the alphbet
  }

  for(ile = 2; ile>=1; ile--) // initialization , condition  , decrementing the no. of Columns(ile) for printing the alphabets
  {
    if(ole == 4)             // seating the 4th condition for printing the alphabets
    printf("  %c ",'@'+ile); //printing the alphbet
  }
  for(ile = 5; ile-4>=1;ile--)  // initialization , condition  , decrementing the no. of Columns(ile) for printing the alphabets
  {
    if(ole == 5)               // seating the 5th condition for printing the alphabets
    printf("  %c ",'A'); //printing the alphbet

  }

  printf("\n"); // to continue in next line 
} // End of the loop
}