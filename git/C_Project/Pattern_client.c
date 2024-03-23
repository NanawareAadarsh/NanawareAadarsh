/**
  *@file :- Pattern_client.c
  *@brief :- c source code file for client
  *@author :- Aadarsh Nanaware (nanawareaadarsh72gmail.com)
  *@date :-9-November-2023

  */


// Headers

#include<stdio.h>
#include<stdlib.h>

#include"client_header.h"

// Global Data Defination 

int user_input = 0;

// Entry point Function 
int main(int argc , char** argv)
{
  // code 

  printf("Enter Pattern No = ");
  scanf("%d",&user_input);

  call_pattern(user_input); // to call a call_pattern Function 

  exit(0);
}