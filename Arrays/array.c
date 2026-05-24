#include<stdio.h>

int main(){

    int marks1 = 91;
    int marks2 = 95;
    int marks3 = 99;
    
    //with use of Array
    int marks[] = {97,98,89};

//Write a program to store the first n fibonacci numbers. -> 0,1,1,2,3,5,8,13,21....n
    int n;
    printf("Enter n :");
    scanf("%d" , &n);

    int fib[n];
     fib[0]=0;
     fib[1]=1;

           printf("%d \t", fib[0]);
          printf("%d \t", fib[1]);

    for(int i=2; i<n; i++){
        fib[i] = fib[i-1] + fib[i-2];
   
        printf("%d \t", fib[i]);
    }
    return 0;
}