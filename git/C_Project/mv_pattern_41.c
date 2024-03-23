/*
  * FILE   :- mv_pattern_41
  * BRIEF  :- Demonstration of PATTERN using C programing language
  * AUTHOR :- Nanaware Aadarsh (nanawareaadarsh7@gmail.com)
  * DATE   :- 5-Nonembr-2023

  */

/*
 
 PATTERN :-
   
   OLE |
 (Rows)|ILE (Columns) 
       |0  1  2  3  4  5  6  7  8  9   10
  _____|____________________________________
       |            
      0| 
      1|	
      2|				*	
 	  3|		   *		*
 	  4|	   *				*
  	  5|   *						*
 	  6|*								*
 	  7|   *						*
 	  8|       *				*
 	  9|		   *		*
 	 10|	            *
 

  ALGORITHAM:- In  this pattern there are 9 number of Rows and 9 number of column ,
               
       
1)  this patttern are Divide in 2 parts 
       1st Part of the pattern :-
          This part  have 5 rows and 9 column therefor,
          1) ole is start from 0 and end at < 5(ole is used as rows)
          2) ile  is start from 0 and end at < 9 (ile is used as columns)
         3)  this part  will print half part of the pattern :-
                                                                                                                           
 
 	                                                  				*
 		                                                		*		*
  		                                                	*		 		*
  		                                                *		 		 		*  
 	                                                 *		 		 		 	   *
       
     2nd Part of the pattern :-
        This part have 5 rows and 9 column therefor,
          1) ole is start from 1 and end at < 5(ole is used as rows)
          2) ile  is start from 0 and end at < 10 (ile is used as columns)
          3) this part will print the remaining part of the pattern :-


                                                     *                         *
                                                        *                   *
                                                           *             *
                                                              *       *
                                                                 *
 
         
        2) here we are taking a condition  to print a pattern used of Branching statement(if,else)       
        3) syntax for Branching statement :-
                 if(condition)
                 {
                     // true block
                 }
                 else
                 {
                     // false block
                 }         
         4) we are using a for loop to peint this pattern
           syntax for for loop:-
                for(initialization ; condition ; increment/decrement)
                {
                    // BLOCK OF LOOP
                    
                }





 -----------------------------------------------------------------------------------------------------------------------------------*/ 

// Heders 

#include<stdio.h>
#include<stdlib.h>

#include"pattern_header_05.h"

// Entry point function

void mv_pattern_41()
{
    
    // starting of the loop
    
     // 1st part of the code
    for(int ole = 0; ole < 5; ++ole) // intialization ; condition ; incrementing the row to print the asterisk(*)
    {
         for(int ile = 0; ile < 9; ++ile ) // initialization ; condition ; incrementing the column to print the asteerisk(*)
         {
             if(4+ole == ile || ile == 4-ole) // seeting the condition to print the asterisk(*)
              {
                  printf("* "); //  printing the asterisk(*)
              }
              else   // 2nd conditon
              {
                  printf("  "); // printg the space 
              }
         }
          printf("\n"); // to contiue in next line
    } 
/*----------------------------------------------------------------------------------------------------------------------------------*/

    // 2nd part of the code 
       for(int ole = 1; ole < 5; ++ole) // intialization ; condition ; incrementing the row to print the asterisk(*)
    {
         for(int ile = 0; ile < 10; ++ile ) // initialization ; condition ; incrementing the column to print the astrisk(*)
         {
             if(ole == ile || ile == 8-ole) // seeting the condition to print the astrisk(*)
              {
                  printf("*  "); //  printing the asterisk(*)
              }
              else   // 2nd conditon
              {
                  printf("  "); // printg the space 
              }
         }
          printf("\n"); // to contiue in next line
    } 
 }