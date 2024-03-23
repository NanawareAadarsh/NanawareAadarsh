/*
  * FILE   :- mv_pattern_45
  * BRIEF  :- Demonstration of PATTERN using C programing language
  * AUTHOR :- Nanaware Aadarsh (nanawareaadarsh7@gmail.com)
  * DATE   :- 7-Nonembr-2023

  */

/*
 
 PATTERN :-
   
   OLE |
 (Rows)|ILE (Columns) 
       |0  1  2  3  4  5  6  7  8  9   10
  _____|____________________________________
       |            
      0| 
      1|	           1
      2|            1     2
      3|         1    2      3
      4|      1    2     3     4
      5|         1    2      3             
      6|           1      2               
      7|               1              
      8|                  
      9|               
 



ALGORITHAM:- In  this pattern there are 7 number of Rows and 7 number of column ,
               
       
1)  this patttern are Divide in 2 parts 
       1st Part of the pattern :-
          1) ole is start from 1 and end at <= 4(ole is used as rows)
          2) ile  is start from 4 and end at ile>=ole for printing the space (ile is used as columns)
         3)  this part  will print half part of the pattern :-
                                                               1
                                                            1     2
                                                         1      2   3
                                                      1      2     3  4       
                                                                                       
 
     2nd Part of the pattern :-
          1) ole is start from 1 and end at <=3(ole is used as rows)
          2) ile  is start from 1 and end at ile<=ole for printig the space(ile is used as columns)
          3) this part will print the remaining part of the pattern :-

                                                        1      2     3             
                                                           1      2               
                                                               1   
       
                 
         2) we are using a for loop to peint this pattern
           syntax for for loop:-
                for(initialization ; condition ; increment/decrement)
                {
                    // BLOCK OF LOOP
                    
                }





 -----------------------------------------------------------------------------------------------------------------------------------*/ 


// headers 

#include<stdio.h>
#include<stdlib.h>

#include"pattern_header_05.h"


// Entry point Function 
void mv_pattern_45()
{
      // Declaration Statement
int ile,ole; 

// 1st part 
// starting of the loop of 1st part
for(ole = 1; ole<=4; ole++) // initialization , condition, incrementing the no. of Rows(ole)
{

for(ile = 4; ile>= ole; ile--) // initialization , condition , decrementing the no. of Colmns(ile)
{

printf("  "); // printing the space 

} 

for(ile = 1; ile<=ole; ile++) //initialization , condition , incremneting the no. of Columns(ile) for printing the Numbers
{
printf("%d    ",ile); // printing the numbers
}

printf("\n"); 	// to continue in next line 
}  // End of the loop of 1st part 
/*--------------------------------------------------------------------------------------------------------------------*/
// 2nd part

// satrting of the loop of the 2nd part 
for(ole =1 ; ole<=3; ole++) // initialization , condition , incrementing the no . of Rows(ole) in 2nd part
{
for(ile= 1; ile<=ole; ile ++) // initialization , condition , incrementing the no. of Columns(ile) in 2nd part 
{
printf("   "); // printing the space 
}
for(ile = 1; ile<=4-ole; ile++) // initialization , condition , incrementing the no.of Columns(ile) in 2n part to print the Numbers
{

printf("%d     ",ile); 	// printing the numbers
}
printf("\n"); 	// to continue in next line
}
// End of the lop of 2nd part 

}
