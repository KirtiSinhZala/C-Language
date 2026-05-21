#include<stdio.h>

int sum(int n);

int main() {

//recursion 
// sum of first n natural numbers
    printf("sum is : %d \n", sum(5));
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