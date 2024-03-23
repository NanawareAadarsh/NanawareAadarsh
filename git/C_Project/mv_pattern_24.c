
/**
  *
  * FILE   :- mv_pattern_24
  * BRIEF  :- Demonstration of PATTERN using C programing language
  * AUTHOR :- Nanaware Aadarsh (nanawareaadarsh7@gmail.com)
  * DATE   :- 7-November-2023

  */

/*
 
 PATTERN :-
   
   OLE |
 (Rows)|ILE (Columns) 
       |  1  2  3  4  5  6  7  8  9
 ______|_______________________________
       |            
     1 |              A
     2 |           C  B  A
     3 |        E  D  C  B  A
     4 |     G  F  E  D  C  B  A
     5 |  I  H  G  F  E  D  C  B  A



  ALGORITHM :-
              This pattern have 5 rows and 9 columns therefor,

               1) ole is start from 1 and end at <=5 (ole is used as Row)  
               2) ile is start from 0 and  end at ile>=ole for the printing space before characters
               3) ile  is start at 0 and end at ile ile<= ole*2-1 to print the character 
               5)  we have to take one condition to print space  (ile < ole )
               6) the branching statement are used to take condition (if , else if , else statement) 
               7) syntax for branching statement :-
                                                  
                                                   if(condition )
                                                   {
	                                                 // True block
                                                   }
                                                   else if(2nd condition )
                                                   {
	                                                // True block
                                                   }
                                                   else 
                                                   {
	                                                   // False bolck
                                                   }

               8) we are using for loop to print this pattern,
                   syntax of for loop :- 
                                        for(initialization ; condition ; increment/ decrement)
                                           {
	                                            // BLOCK OF LOOP
                                           }
----------------------------------------------------------------------------------------------------------------------------------------- */ 



// Headers 
#include<stdio.h>
#include<stdlib.h>

#include"pattern_header_03.h"

// Entry point Function 
void mv_pattern_24()
{ // Declaration Statement 
	int ile , ole;
// Starting of thr loop	
	for(ole = 1; ole<=5; ole++) // initialization , condition , incrmenting the no.of Rows(ole)
  {
    for(ile = 5; ile>=ole; ile--) // initilaziation , condiion , decrementing the no. of Columns(ile) 
    {
      printf("   "); // Printing the space 
    }
    for(ile = 1; ile<=ole*2-1; ile++ ) // initialization , condition , incrementing the no. of Column(ile) for printing the alphabets
    {
      if(ole == 1) // Seating the condition to print alphabets
      {
        printf(" A "); // // Here we are printiung the alphabets 'A'
      }
      else if(ole == 2) // seating 2nd condition to print alpahbets
      {
      printf(" %c ",'D'-ile); // Printing the alphabet 
      }
      else if (ole == 3) // seating 3rd condition to print alphabet
      {
        printf(" %c ",'F'-ile); // printing the alphabet
      }
      else if(ole == 4) // seating the 4th condition to print alphabet
      {
        printf(" %c ", 'H'-ile); // printing the alphabets
      }
      else // another condition 
      {
        printf(" %c ",'J'-ile); // printing the alphabets
      }
    }

    printf("\n"); // to continue in next line
  }
}