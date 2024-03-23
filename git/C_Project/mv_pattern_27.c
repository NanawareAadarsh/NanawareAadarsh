

/**
  *
  * FILE   :- mv_pattern_27
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
     1 |  A  B  C  D  E  F  G  H  I            
     2 |     A  B  C  D  E  F  G
     3 |        A  B  C  D  E
     4 |           A  B  C
     5 |              A



  ALGORITHM :-
              This pattern have 5 rows and 9 columns therefor,

              1) ole is start from 1 and end at <=5 
              20 ile  is start from 1 and end at ile < ole for print the space
              3)  ile is start from 1 and end at <= 2* (5 - ole) for print a characters
              4)  we are taking the '@' to print the character 'A'
              5) we are using for loop to print this pattern,
                   syntax of for loop :- 
                                        for(initialization ; condition ; increment/ decrement)
                                           {
                                                // BLOCK OF LOOP
                                           }
------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

// Headers


#include <stdio.h>
#include<stdlib.h>

#include"pattern_header_03.h"

// Entry point
void  mv_pattern_27()
 {
    
    // Starting of the loop

    for (int ole = 1; ole <= 5; ole++)  // initialization ; condition ; incrementing of the row 
    {
        for (int ile = 1; ile < ole; ile++) // initialization ; condition ; incrementing of the column to print the space
        {
            printf("  "); // Print spaces
        }
        for (int ile = 1; ile <= 2 * (5 - ole) + 1; ile++) // initialization ; condition ; incrementing of column to print the charachters
        {
            printf("%c ",'@'+ile); // printing the characters ,'@'+ile it will print the value 'A' cause ASCII value of '@' is 64 and value of ile is 1 so 64 +1 = 65 ASCII values of 'A'
            
        }
        printf("\n"); // to comntinue in next line 
    }

    
}