#include<stdio.h>

int main(){

// Q.  Check if a file exists before reading form it.
    FILE *fptr;
    FILE *fptr2;
    FILE *fptr3;
     fptr = fopen("test.txt", "w");
     fptr2 = fopen("fruit.txt", "w");
     fptr3 = fopen("text.txt", "r");
 /*   // if(fptr == NULL){
    //     printf("file does not exists!");
    // }else {
    //     printf("file Accessed");
    // }
    


    
    fprintf(fptr2, "%c", 'M');
    fprintf(fptr2, "%c", 'A');
    fprintf(fptr2, "%c", 'N');
    fprintf(fptr2, "%c", 'G');
    fprintf(fptr2, "%c", 'O');
    

//Read & Write a character
    printf("%c \n", fgetc(fptr2));
    printf("%c \n", fgetc(fptr2));
    printf("%c \n", fgetc(fptr2));
    printf("%c \n", fgetc(fptr2));
    printf("%c \n", fgetc(fptr2));


    fputc('A', fptr);
    fputc('P', fptr);
    fputc('p', fptr);
    fputc('L', fptr);
    fputc('E', fptr);
  */
    char ch;
    ch = fgetc(fptr3);
    while(ch != EOF){
        printf("%c", ch);
        ch = fgetc(fptr3);
    }
    printf("\n");


fclose(fptr3);
fclose(fptr2);
fclose(fptr);
    return 0;
}