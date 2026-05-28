#include<stdio.h>

int main(){

// Q.  Check if a file exists before reading form it.
    FILE *fptr;
    fptr = fopen("test.txt", "r");
    if(fptr == NULL){
        printf("file does not exists!");
    }else {
        printf("file Accessed");
    }
    fclose(fptr);




 





    return 0;
}