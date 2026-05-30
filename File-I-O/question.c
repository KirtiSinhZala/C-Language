#include<stdio.h>

int main(){     /* 
// Make a program to read 5 integers from a file.
    FILE *fptr;
    fptr = fopen("question.txt", "r");
    int n;
    fscanf(fptr, "%d", &n);
    printf("Number is = %d \n", n);
    fscanf(fptr, "%d", &n);
    printf("Number is = %d \n", n);
    fscanf(fptr, "%d", &n);
    printf("Number is = %d \n", n);
    fscanf(fptr, "%d", &n);
    printf("Number is = %d \n", n);
    fscanf(fptr, "%d", &n);
    printf("Number is = %d \n", n);
fclose(fptr);

//Make a program to input student information from a user & enter is to  FILE.
    FILE *fptr2;
    fptr2 = fopen("question.txt", "w");
    int age;
    char name[100];
    float cgpa;

    printf("Enter name : ");
    scanf("%s", name);
    printf("Enter age :");
    scanf("%d", &age);
    printf("Enter cgpa :");
    scanf("%f", &cgpa);

    fprintf(fptr2, "%s \t", name);
    fprintf(fptr2, "%d\t", age);
    fprintf(fptr2, "%f", cgpa);
    fclose(fptr2);


// Write a program to write all the odd numbers from 1 to n in a file.
    FILE *fptr3;
    fptr3 = fopen("question.txt", "w");
    int n;
    printf("enter n :");
    scanf("%d", &n);
        for(int i=1; i<=n; i++){
            if(i % 2 != 0){
                fprintf(fptr3, "%d \t", i);
            }
        }
     fclose(fptr3);
*/
//2 numbers - a & b, are writeen in a file. write a program to replace them with their sum.
    FILE *fptr4;
    fptr4 = fopen("question.txt", "r");
    int a;
    fscanf(fptr4, "%d", &a);
    int b;
    fscanf(fptr4, "%d", &b);
      fclose(fptr4);

    fptr4 = fopen("question.txt", "w");
    fprintf(fptr4, "%d", a + b);
    fclose(fptr4);
    return 0;
}