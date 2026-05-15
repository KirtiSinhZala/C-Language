#include<stdio.h> 

int main() {

    int age = 21;
    float pi = 3.14;
    char star = '*';

    printf("age is %d \n", age);
    printf("pi value is %f \n", pi);
    printf("star looks like  %c \n", star);

    int a,b;
    printf("enter value of a : ");
    scanf("%d", &a);

      printf("enter value of b : ");
    scanf("%d", &b);

    int sum = a + b;
    printf("sum of a and b is %d",sum);


    return 0;
}