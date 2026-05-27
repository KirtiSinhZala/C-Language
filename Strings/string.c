#include<stdio.h>
#include<string.h>  // CHARRACTER : 1 BYTE

int main(){
//String Example : type of initialising strings
    char name[] = {'m', 'e', 'h', 'h', 'u', 'l', '\0'}; // '\0' means this character array is not simple character array, it is whole word and also means string end Here. 
    char name2[] = "mehul"; //""(double quoats) are use for string and when we use COMPILER automatically add '\0' at last of string
  
//what happens in memory?   
    // string's characters store in continously and at last \0 also store in last of string array

//String Format Specifier
   // %c -> input & output string as character By character
   // %s -> input & output as whole string and also  when we write %s  compiler know it was STRING, and automatically add \0 last of string
   // but SCANF()  function  cannot input MULTI-Word STrings with spaces , so we use gets() -> fgets() for input and puts() for output
   char myName[50];
   scanf("Enter your name : %s", myName);     //Here. we have not required to write  &myName because it is  character Array and Array always Pointer
   printf("MY name is : %s", myName);
   
   // OR for string Input & Output 
   char str[50];
  //gets(str);
  fgets(str,50, stdin);
   puts(str);
   

//String using POINTERS:  string -> character array -> array -> pointer
    char *str1 = "hello world";  //Store string in memory & the assigned address is stored in the char pointer 'str1'
    char *str1 = "hyyyy";  // can be RE-INITIALIZED  : bcoz POINTER NOTATION
    char str1[] = "hyyyy"; //can not be RE-INITIALIZED : bcoz STRING NOTATION
    return 0;

}