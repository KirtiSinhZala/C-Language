#include<stdio.h>

int maina() {

// Q.1  Write a program to calculate area of a square (side is given)
    int side;
    printf("Enter side value : ");
    scanf("%d", &side);

    printf("Area is %d", side * side);

    // Q. Solve int a = 1.999999 and tell whats output here a=1 or a=2
    int a = 1.999999;
    printf("%d", a);    

    return 0;
}