/*
  * FILE   :- mv_pattern_44
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
      2|            2     2
      3|         3           3
      4|      4                 4
      5|   5                       5
      6|      4                  4
      7|         3            3
      8|            2      2
      9|               1
 



ALGORITHAM:- In  this pattern there are 9 number of Rows and 9 number of column ,
               
       
1)  this patttern are Divide in 2 parts 
       1st Part of the pattern :-
          This part  have 5 rows and 9 column therefor,
          1) ole is start from 1 and end at <= 5(ole is used as rows)
          2) ile  is start from 5 and end at ile>=ole for printing the space (ile is used as columns)
         3)  this part  will print half part of the pattern :-
                                                               1
                                                            2     2
                                                        3            3
                                                     4                  4
                                                  5                        5             
 
     2nd Part of the pattern :-
        This part have 5 rows and 7 column therefor,
          1) ole is start from 1 and end at <= 5(ole is used as rows)
          2) ile  is start from 5 and end at ile>=ole for printig the space(ile is used as columns)
          3) this part will print the remaining part of the pattern :-

                                                        4                   4
                                                           3             3
                                                              2       2
                                                                  1 
 
         
        2) For printing the Number in proper sequence we are using 1) ile<=ole*2-1 in 1st part
                                                                   2) ile>=ole*2-1 in 2nd part

        
        3) here we are taking a condition  to print a pattern used of Branching statement(if,else)       
        4) syntax for Branching statement :-
                 if(condition)
                 {
                     // true block
                 }
                 else
                 {
                     // false block
                 }         
         5) we are using a for loop to peint this pattern
           syntax for for loop:-
                for(initialization ; condition ; increment/decrement)
                {
                    // BLOCK OF LOOP
                    
                }





 -----------------------------------------------------------------------------------------------------------------------------------*/ 

// Headers
#include<stdio.h>
#include<stdlib.h>

#include"pattern_header_05.h"

// Entry point Function
void mv_pattern_44()
{
 // Declaration Statement
int ile,ole; 
int number_1 = 1;
int number_2  = 4;

//1st part 
// Starting of the loop of 1st part 
for(ole = 1; ole<=5; ole++) // initialization , condition , incrementing no. of the Rows(ole)
{

for(ile = 5; ile>=ole; ile--)  // initializatin , condition , decrementing the no. of the Columns(ile)
{
 
printf("   "); 	// printing the space
}

for(ile = 1; ile<=ole*2-1; ile++) // initialization , condition , incrementing the no.of the Columns(ild)

{

if(ile == 1 || ile== ole*2-1) // seating the condition to print the nubers in pattern
{

printf(" %d ",number_1); 	// Here we are printing the number with the help of number_1 , it will help us to print number start from 1

}


else  // 2nd conditon (if condition is false) 
{

printf("   "); // printing the space 

}
}

number_1 = number_1+1; // after a one row the number will print by incrementing 
printf("\n"); 	// to continue in next line 

}
/*------------------------------------------------------------------------------------------------------------------------------------------------------*/
//2nd part 
// Starting of the loop of 2nd part
for(ole = 1; ole<=5; ole++) // initialization , condition , incrementing the no. of Rows(ole) in 2nd part
{

for(ile = 1  ; ile<=ole; ile++) // initialization , condition , incrementing the no. of Columns(ile) in 2n part 
{

printf("   "); 	 // printing the space 
}

for(ile = 7; ile>=ole*2-1; ile--) // initialization , condition , decrementing the no. of Columns(ile) in 2n part for printing the number
{

if(ile ==7 || ile== ole*2-1 || ile ==1) // seating a condition for printing the numbers
{

printf("   %d",number_2); 	// printing the numbers with the help of number_2, it will hwlp us to print number start from 4 
}
else  // 2nd xondition (if 1st condtion is false)
{

printf("   "); // printing the space 

}

}
number_2 = number_2-1; // after a one row the number will print by decrementing by 1 
printf("\n"); 	// to continue in next line 
}
}