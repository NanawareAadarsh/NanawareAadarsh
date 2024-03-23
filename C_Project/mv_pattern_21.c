
/**
  *
  * FILE   :- mv_pattern_21
  * BRIEF  :- Demonstration of PATTERN using C programing language
  * AUTHOR :- Nanaware Aadarsh (nanawareaadarsh7@gmail.com)
  * DATE   :- 18-October-2023

  */

/*
 
 PATTERN :-
   
   OLE |
 (Rows)|ILE (Columns) 
       |  0  1  2  3  4  5  6  7  8
 ______|_______________________________
       |            
     1 |              *
     2 |           *  *  *
     3 |        *  *  *  *  *
     4 |     *  *  *  *  *  *  *
     5 |  *  *  *  *  *  *  *  *  *



 
 ALGORITHM :-
             This pattern has 5 ROWS and 9 COLUMNS  therefor,

             1) OLE is start from 1 and END at < 6 
             2) ILE is start from 5 and end at >= ole (for print the spce)
             3) ILE is start from 1 and end at <=2*ole-1 (for print the star(*))
             4) To prin this pattern we are using for loop
             5) syntax of for loop :-
                                      for(intialization;conditionl;incremrnt / decrement)
                                      {
	                                             // BLOCK OF LOOP
                                      } 

--------------------------------------------------------------------------------------------------------------*/

//  Headers
#include<stdio.h>
#include<stdlib.h>

#include"pattern_header_03.h"

 // Entry point 

void mv_pattern_21()
{ 
   // Starting of the loop	 

	for(int ole=1;ole<6;++ole) // Initialization ; Condition ; Incrementing of the row
	{
		
	  for(int ile=5;ile>=ole;ile--) // Intialiazation ; Condition ; Derementing of the column to print the space
	  {
	  	  
	  	printf("  "); // printing the space
	      
     }
	     for(int ile=1;ile<=2*ole-1;ile++) // Intialization ; Condition ; Incrememting of column to print the star
	    {
	    		    		
		  printf("* "); // printing the star
		  
		
       }
	
	    printf("\n"); // to continue in next line 
	}
	  
}