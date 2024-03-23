/**
  *@file :- client_header.h
  *@brief :- Header For including all patterns
  *@author :- Aadarsh Nanaware (nanawareaadarsh7@gmail.com)
  *@date :-9-November-2023

  */

  // Headers 

  #include"pattern_header_01.h"
  #include"pattern_header_02.h"
  #include"pattern_header_03.h"
  #include"pattern_header_04.h"
  #include"pattern_header_05.h"

// Here we are making  a Array Of Function Pointer For the program
void(*pattern_function[50])(void) = { // Code Organisation
                                      mv_pattern_01,
                                      mv_pattern_02,
                                      mv_pattern_03,
                                      mv_pattern_04,
                                      mv_pattern_05,
                                      mv_pattern_06,
                                      mv_pattern_07,
                                      mv_pattern_08,
                                      mv_pattern_09,
                                      mv_pattern_10,
                                      mv_pattern_11,
                                      mv_pattern_12,
                                      mv_pattern_13,
                                      mv_pattern_14,
                                      mv_pattern_15,
                                      mv_pattern_16,
                                      mv_pattern_17,
                                      mv_pattern_18,
                                      mv_pattern_19,
                                      mv_pattern_20,
                                      mv_pattern_21,
                                      mv_pattern_22,
                                      mv_pattern_23,
                                      mv_pattern_24,
                                      mv_pattern_25,
                                      mv_pattern_26,
                                      mv_pattern_27,
                                      mv_pattern_28,
                                      mv_pattern_29,
                                      mv_pattern_30,
                                      mv_pattern_31,
                                      mv_pattern_32,
                                      mv_pattern_33,
                                      mv_pattern_34,
                                      mv_pattern_35,
                                      mv_pattern_36,
                                      mv_pattern_37,
                                      mv_pattern_38,
                                      mv_pattern_39,
                                      mv_pattern_40,
                                      mv_pattern_41,
                                      mv_pattern_42,
                                      mv_pattern_43,
                                      mv_pattern_44,
                                      mv_pattern_45,
                                      mv_pattern_46,
                                      mv_pattern_47,
                                      mv_pattern_48,
                                      mv_pattern_49,
                                      mv_pattern_50,
                                    };

// Function Declarartion 

/*
 * Function :-We are Crating a Function to call a pattern function
 * identifer :- call_pattern
 * params :- user_input_value
 * returns :- None 

*/

void call_pattern(int user_input_value)
{
	// code

	// IN code 1st we are checking a Error in our program

	if( user_input_value < 1 || user_input_value > 50) // Here we are seat A condition for Checking an a Error
	{
		printf("ERROR FIND : The Enterd Pattern Number is not avilable / Check The Enterd Nmber / Incorrect Number Enterd"); // printig the Error massage


	}

  else // Not Error Genrated Then This part will be executed
  {
  	pattern_function[ user_input_value-1](); // calling the pattern function 
  }	
}                                    
