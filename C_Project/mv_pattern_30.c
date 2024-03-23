
/**
  *
  * FILE   :- mv_pattern_30
  * BRIEF  :- Demonstration of PATTERN using C programing language
  * AUTHOR :- Nanaware Aadarsh (nanawareaadarsh7@gmail.com)
  * DATE   :- 20-October-2023

  */

/*
 
 PATTERN :-
   
   OLE |
 (Rows)|ILE (Columns) 
       |  0  1  2  3  4  5  6  7  8
 ______|_______________________________
       |            
     0 |  I  I  I  I  I  I  I  I  I            
     1 |     G  G  G  G  G  G  G
     2 |        E  E  E  E  E
     3 |           C  C  C
     4 |              A



  ALGORITHM :-
              This pattern have 5 rows and 9 columns therefor,
              1) ole is start from 0 and end at < 5 (ole is control the rows )
              2) ile is start from 0 and end at < ole to print the space in pattern (ile is control the column)
              3) ile is start from 0 and end at < counts[ole] to print the characters (ile is control the column)
              4) we are declaring array as characters to print the character which is declare
              5) we are declaring 2nd aaray as counts to diside  how many times a a character will print
              6) to print this pattern we are using the for loop
                syntax for for loop :-
                                      for(intialization ; condition ; incrementing/ decrementing  )
                                      {
                                         // BOLCK OF LOOP
                                      } 

***************************************************************************************************************************/            

// Headres
#include <stdio.h>
#include<stdlib.h>

#include"pattern_header_03.h"

// Entry point

void mv_pattern_30() 
{
   // Here e are taking a  array of characters to print 
    char characters[] = {'I', 'G', 'E', 'C', 'A'};
    int counts[] = {9, 7, 5, 3, 1}; // here we re taking a how many timew a character will be print

    for (int ole = 0; ole < 5; ole++) // initialization ; condition ; incrmenting the row
    {
        // Add spaces for indentation
        for (int ile = 0; ile < ole; ile++) // initialization ; condition ; incrementing the column to print the space
        {
            printf("  "); // printing the space
        }

        // Print the character (starting from 'I' and decreasing)
        for (int ile = 0; ile < counts[ole]; ile++) // initialization ; condition ; incrmnting the column to print the alphbaet
        {
            printf("%c ", characters[ole]); // printing the characters using of aaray of characters
        }

        printf("\n");// to cntinue in next line
    }

    
}