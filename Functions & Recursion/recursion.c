#include<stdio.h>

int sum(int n);
int fact(int a);

int main() {

//recursion 
// sum of first n natural numbers
    printf("sum is : %d \n", sum(5));

//Factorial of a numbers
     printf("factorial is : %d \n", fact(5));

//Write a function to print n terms of the fibonacci sequence.
    return 0;

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