#include<stdio.h>
#include<string.h>

void printString(char arr[]);  //Here we have not required to give SIZE OF STRING because string end on '\0' .otherwise in INTEGER we have required to send size of array because it dont know when array end 
int main() {

//Q. Create a string firstname & lastname to store details of user & print all the characters using a loop.
    char firstName[] = "Kirti Sinh ";
    char lastName[] = "Zala";

    printString(firstName);
    printString(lastName);

//



    return 0;
}

void printString(char arr[]){
    for(int i=0; arr[i] != '\0'; i++){
        printf("%c", arr[i]);
    }
    printf("\t");
}