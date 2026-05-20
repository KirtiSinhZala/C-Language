#include<stdio.h>


void namaste();
void bonjour();
void printHello();

int main() {
   char ch;
   printf("Enter i if indian or f if french :");
   scanf("%c", &ch);

   if(ch == 'i'){
    namaste();
   }else if(ch == 'f'){
    bonjour();
   }else{
    printHello();
   }

   return 0;
}

//function Defination
void namaste(){
    printf("Namaste \n");
}

void bonjour(){
    printf("bonjour \n");
}

void printHello(){
    printf("Hello World \n");
}