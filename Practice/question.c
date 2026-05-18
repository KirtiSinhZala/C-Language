#include<stdio.h>

int main() {

// Q.1  Write a program to calculate area of a square (side is given)
    int side;
    printf("Enter side value : ");
    scanf("%d", &side);

    printf("Area is %d \n", side * side);

// Q. Solve int a = 1.999999 and tell whats output here a=1 or a=2
    int a = 1.999999;
    printf("%d", a);    

// Q.1  Write a program to calculate area of a square (side is given)
    int side;
    printf("Enter side value : ");
    scanf("%d", &side);

    printf("Area is %d \n", side * side);

// Q.2 Write a program to caculate area of a circle(radius is given)

  float pi = 3.14;
  float radius;
  printf("enter radius :");
  scanf("%f", &radius);

  printf("Area of circle is : %f \n", pi * radius * radius);

// Q. Solve int a = 1.999999 and tell whats output here a=1 or a=2
    int a = (int) 1.999999;
    printf("%d \n", a); //output : 1

// write a program to check if a number is divisible by 2 or not.  same for even and odd
  int x;
  printf("Enter any Number");
  scanf("%d", &x);

  printf("%d", x % 2 == 0);  //1 -> divisible  , 0 -> not divisible

// Q. Opertator precedence & Associativity Rule
  int k = 5*2-2*3;  //1)5*2/2*3  2)5*(2/2)*3  3)5+2/2*3
  printf("%d", k);


    return 0;
}