#include<stdio.h>

int main(){

// Q.  Check if a file exists before reading form it.
 /*    FILE *fptr;
     fptr = fopen("test.txt", "w");
   // if(fptr == NULL){
    //     printf("file does not exists!");
    // }else {
    //     printf("file Accessed");
    // }
    
*/
// EOF(End Of File)  -> NULL
// fgetc return EOF to show that the file has ended
    FILE *fptr2;
    fptr2 = fopen("eof.txt", "r");
    
    char ch;
    ch = fgetc(fptr2);
    while(ch != EOF){
        printf("%c", ch);
        ch = fgetc(fptr2);
    }
    printf("\n");


    fclose(fptr2);
  //  fclose(fptr);
    return 0;
}