#include<stdio.h>

int main() {

//Q. Print the numbers from 0 to n , if n is given by user.
    int n;
    printf("Enter any number :");
    scanf("%d ", &n);

    int i = 1;
    while(i <= n){
        printf("%d \n",i);
        i++;
    }
    return 0;
}