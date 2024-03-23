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
       |  0  1  2  3  4
 ______|________________
     0 |  1
     1 |  2  1  
     2 |  1  2  3
     3 |  4  3  2  1
     4 |  1  2  3  4  5
     5 |  4  3  2  1
     6 |  1  2  3
     7 |  2  1
     8 |  1


ALGORITHM :-
           
          This patter has 9 Rows and 5 Columns therefor,
           
           1) Ole is start from 1 and stop at <= 4 for 1st part
           2)  ole is start from 5 and stop at >= 1  (OLE is used to control no. of Rows)
           3) Ile is start from ile = ole  and stop at >= 1 for 1st and 2nd part
             (ILE is used to control no. of Columns)
           4) In this pattern we are printing the alphabets , the ile <= ole it wil be print space also
           5) we are considering the pattern in 2 parts 
           6) 1st loop wiil be print first part :- 
                                                   1
                                                   2  1
                                                   1  2  3 
                                                   4  3  2  1

           7) And 2nd loop will be print second part :-
                                                       1  2  3  4  5
                                                       4  3  2  1
                                                       1  2  3
                                                       2  1
                                                       1

           8) We are seeting 2 conditoin to print this pattern ,
          
                      a)if our number of row is even then it will be numbers in Decsending order....4 3 2 1 like this (we are checking this condition with ole is %2 == 0)        
                      b) else it will print number in assending order

           9) To set a condition we are using a Branching Statement (if , else statement)
          10) Syantx for Branching Statement :-
                                               if( condition) 
                                                 {
                                                       // true block
                                                 }
                                                 else
                                                  {
                                                      // flase block
                                                  }

          11) we are using the for loop to print this pattern,
               Syntax of for loop :-
                                      
                                         for(initializaton;condition;increment/decrement)
                                       {
                                         
                                           // BLOCK OF LOOP
                                       
                                        }

/****************************************************************************************************************/
  
  // Headers 
  #include<stdio.h>
  #include<stdlib.h>

 #include"pattern_header_02.h"

// Entry point 

void mv_pattern_13()
 {
    //starting of the loop
 
 //  1st part

    for(int ole = 1; ole <=4; ole++)  //  Initialization ; Condition ; Incremtion of the row for 1st part
    {
        //Branching statement
        if(ole %2 ==0)    // here we are seeting the condition to print pattern
        
        for(int ile = ole; ile >= 1; ile--)  // Initialization ; Condition ; decrementioin of the column for 1st part
        {
            printf("%d ",ile);      // if true then print number in decsending order
        }
      
        else       // else condtion is not true
        {
          for(int ile = 1; ile <=ole; ile++) // Intialization ; Condition ; Incremention of the column in 1st part
          {
            printf("%d ",ile); // then number will be print ani asending order
          }
        }
        printf("\n"); // to continue in next line
    }   
    
/*-----------------------------------------------------------------------------------------------------------------------------*/    
   
    // 2nd part

     for(int ole = 5;ole >=1;ole--) // Intiliazation ; Condition ; Decremention of the roe in 2nd part
       {
        if(ole %2 == 0) // seeting the condition to print a pattern
        {
            for( int ile = ole; ile >=1; ile--)  //  Initialization ; Condition ; Decrementing of the column in 2nd part
            {
                printf("%d ",ile); // printing the number in decsending order
            }
        }
       
       
     else{ // if condition is false
        for(int ile = 1; ile <= ole; ile++) // Initialization ; Condition ; Incrementing of the column in 2nd part
        {
            printf("%d ",ile); // printing the number in asending order
        }
        
       }
       printf("\n"); // to continue in next line 
     }
  }   