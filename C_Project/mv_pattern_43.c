/*
  * FILE   :- mv_pattern_43
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
      1|	           E
      2|            D     D
      3|         C           C
      4|      B                 B
      5|   A                       A
      6|      B                  B
      7|         C            C
      8|            D      D
      9|               E
 



ALGORITHAM:- In  this pattern there are 9 number of Rows and 9 number of column ,
               
       
1)  this patttern are Divide in 2 parts 
       1st Part of the pattern :-
          This part  have 5 rows and 9 column therefor,
          1) ole is start from 1 and end at <= 5(ole is used as rows)
          2) ile  is start from 5 and end at ile>=ole for printing the space (ile is used as columns)
         3)  this part  will print half part of the pattern :-
                                                               E
                                                            D     D
                                                        B            B
                                                     C                  C
                                                  A                        A             
 
     2nd Part of the pattern :-
        This part have 5 rows and 7 column therefor,
          1) ole is start from 1 and end at <= 5(ole is used as rows)
          2) ile  is start from 5 and end at ile>=ole for printig the space(ile is used as columns)
          3) this part will print the remaining part of the pattern :-

                                                        B                   B
                                                           C             C
                                                              D       D
                                                                  E 
 
         
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
void mv_pattern_43()
{
  // Declareation Statement
int ile,ole; 
char ch_1 = 'E';
char ch_2  = 'B';

// Starting the loo of he first part
//1st part 
for(ole= 1; ole<=5; ole++) // initialization , condition , incrementing the no. of Rows(ole)
{

for(ile = 5; ile>=ole; ile--) // initialization , condition , decrementing the no. of Columns(ile)
{
 
printf("   "); 	// Here we are printig the space 
}

for(ile = 1; ile<=ole*2-1; ile++) // initialization , condition , incrementing the no. of Columns(ile) for printig the alpabet 

{

if(ile == 1 || ile== ole*2-1)  // seating the condition for printing the alphabet or charachters
{

printf(" %c ",ch_1); 	// Here we are printing the characters with the help of ch_1 , it will help us to print alpabet starting from 'E'

}


else
{

printf("   ");  // Here we are printing the space 

}
}

ch_1 = ch_1-1; // after a one row it will print the character in decresing order
printf("\n"); 	// to continue in next line 

} // End of the  loop of first  part
/*------------------------------------------------------------------------------------------------------------------------------*/
//2nd part 
// Starting of the loop of 2nd part 
for(ole = 1; ole<=5; ole++)  // initialization, condition , incrementing the no. of Rows(ole) in 2nd part 
{

for(ile = 1; ile<=ole; ile++) // initialization , condition , incrementing the no .of Column(ile) in 2nd part
{

printf("   "); 	// printing the space 
}

for(ile = 7; ile>=ole*2-1; ile--) // initialization , condition , decrementing the no. of Columns(ile) in 2nd part to prin the alphabet
{

if(ile ==7 || ile== ole*2-1 || ile ==1) // seating a condition for printing the alphabet or characters
{

printf("   %c",ch_2); // Here we are printing the characters  with the help of ch_2, it will help us to print alphabet starting from 'B'
}
else
{

printf("   "); // print the space if the condition is false

}

}
ch_2 = ch_2+1;  // afte a one row it print the character in incresing order
printf("\n"); 	//to continue in next line 
} // End of the loop of the 2nd part 
}
