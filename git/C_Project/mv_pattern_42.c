/*
  * FILE   :- mv_pattern_42
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
      1|	             5
      2|            4     4
      3|         3           3
      4|      2                 2
      5|   1                       1
      6|      2                  2
      7|         3            3
      8|            4      4
      9|               5
 



ALGORITHAM:- In  this pattern there are 9 number of Rows and 9 number of column ,
               
       
1)  this patttern are Divide in 2 parts 
       1st Part of the pattern :-
          This part  have 5 rows and 9 column therefor,
          1) ole is start from 1 and end at <= 5(ole is used as rows)
          2) ile  is start from 5 and end at ile>=ole for printing the space (ile is used as columns)
         3)  this part  will print half part of the pattern :-
                                                               5
                                                            4     4
                                                        3            3
                                                     2                  2
                                                  1                        1             
 
     2nd Part of the pattern :-
        This part have 5 rows and 7 column therefor,
          1) ole is start from 1 and end at <= 5(ole is used as rows)
          2) ile  is start from 5 and end at ile>=ole for printig the space(ile is used as columns)
          3) this part will print the remaining part of the pattern :-

                                                        2                   2
                                                           3             3
                                                              4       4
                                                                 5
 
         
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
void  mv_pattern_42()
{
  // Declaration 
int ile,ole; 
int number_1 = 5;
int number_2  = 2;
 
 // Starting of the loop of 1st part 

//1st part of the pattern 
for(ole = 1; ole<=5; ole++) // initialization , condition, incrementation of the Rows(ole) in 1st part
{

for(ile = 5; ile>=ole; ile--) // initialization , condition , Decremantation of the Column(ile) in 1st part 
{
 
printf("   "); 	// Here we are printing the space in the pattern
}

for(ile = 1; ile<=ole*2-1; ile++) // initiaalization , condition , incrementing of the columns(ile) in 1st part for printing the number

{

if(ile == 1 || ile== ole*2-1) // Seating the condition for printing the numbers in pattern
{

printf(" %d ",number_1); 	// printing the number , number_1 is help us to print the number starting from 5 

}


else // 2nd Condition 
{

printf("   "); // printing the space 

}
}

number_1 = number_1-1; // after compliting the 1 row it wil decrement the number by 1 till end of this loop 
printf("\n"); 	// to continue in next line 

}// Ending the loop of the 1st part
/*------------------------------------------------------------------------------------------------------------------------------------------*/
// 2nd Part 

// starting the loop of the 2nd part 
for(ole = 1; ole<=5; ole++) // initialization , condition , incrementing the no. of Rows(ole) in 2nd part
{

for(ile = 1; ile<=ole; ile++) // initialization , condition , incrementing the no. of Columns(ile) in 2nd part 
{

printf("   "); 	 // Here we are printing the space in pattern
}

for(ile = 7; ile>=ole*2-1; ile--) // initialization , condition , drecremnting the no. of Columns(ile) for printing the Numbers in pattern 
{

if(ile ==7 || ile== ole*2-1 || ile ==1) // Seating the condition to print the number in pattern
{

printf("   %d",number_2); 	// printing the number , number_2 is hep us to print the numbers starting from the 2  
}
else // 2nd condition 
{

printf("   "); // printing the space 

}

}
number_2 = number_2+1; // after compliting the 1 row it will increment the number by 1 
printf("\n"); 	 // to continue in next line 
} // Ending the loop of the 2nd part
}

  
