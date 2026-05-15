#include<stdio.h>

int maina() {

// Q.1  Write a program to calculate area of a square (side is given)
    int side;
    printf("Enter side value : ");
    scanf("%d", &side);

    printf("Area is %d", side * side);
    return 0;
}