#include<stdio.h>

int sum(int n);
int fact(int a);
int fib(int n);


int main() {

//recursion 
// sum of first n natural numbers
    printf("sum is : %d \n", sum(5));

//Factorial of a numbers
     printf("factorial is : %d \n", fact(5));

//Write a function to print n terms of the fibonacci sequence.
    printf("fib of n is : %d \n", fib(6));
    return 0;

}

int fib(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }

    int fibNm1 = fib(n-1);
    int fibNm2 = fib(n-2);
    int fibN = fibNm1 + fibNm2;
    return fibN;
}

int sum(int n){
    if(n==1){   //base case
        return 1;   
    }
    int sumNM1 = sum(n-1);
    int sumN = sumNM1 + n;
    return sumN;
}

int fact(int a){
    if(a==1){   //base case
        return 1;   
    }
    int factNM1 = fact(a-1);
    int factN = factNM1 * a;
    return factN;
}