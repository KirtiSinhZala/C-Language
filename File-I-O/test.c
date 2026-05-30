#include<stdio.h>

int main(){
    //# fscanf(fptr, "%c", &ch)    
   //fptr : file pointer(which file data you want to read),  %c : formet specifiers(which type of data want to read in file)  , &ch : variable name(where to store)
/* 
    FILE *fptr;
    fptr = fopen("test.txt","r");
  

    char ch;
    fscanf(fptr,"%c",&ch);
    printf("character = %c\n", ch);
     fscanf(fptr,"%c",&ch);
    printf("character = %c\n", ch);
     fscanf(fptr,"%c",&ch);
    printf("character = %c\n", ch);
     fscanf(fptr,"%c",&ch);
    printf("character = %c\n", ch);
     fscanf(fptr,"%c",&ch);
    printf("character = %c\n", ch);

// # fprintf(fptr, "%c", ch)
// fptr:file pointer(which file want to read),  %c:formet specifiers(which type of data want to read)  , ch: variable name(which variable value want to write or print)

     FILE *fptr2;
     fptr2 = fopen("fruit.txt", "w");

    fprintf(fptr2, "%c", 'M');
    fprintf(fptr2, "%c", 'A');
    fprintf(fptr2, "%c", 'N');
    fprintf(fptr2, "%c", 'G');
    fprintf(fptr2, "%c", 'O');

// # fgetc(fptr)  ->   only for Character Data Type
//SYNTAX is less compare to fscanF()
// it bring single character from file  -> for read file it is same like fscanf() func but in this func pass single parameter

     FILE *fptr;
    fptr = fopen("test.txt","r");

    printf("%c\n", fgetc(fptr));
    printf("%c\n", fgetc(fptr));
    printf("%c\n", fgetc(fptr));
    printf("%c\n", fgetc(fptr));
    printf("%c\n", fgetc(fptr));
*/
//fputc('A', fptr) -> only for Character Data Type
// it put(Write) sigle character in file  -> for Write in file
    FILE *fptr3;
    fptr3 = fopen("fruit.txt","w");

     fputc('G', fptr3);
     fputc('U', fptr3);
     fputc('A', fptr3);
     fputc('V', fptr3);
     fputc('A', fptr3);

    fclose(fptr3);
  //  fclose(fptr2);
   // fclose(fptr);
return 0;
}