#include<stdio.h> 

int main() {

  /* 
    int age = 21;
   // float pi = 3.14;
    char star = '*';

    printf("age is %d \n", age);
  //  printf("pi value is %f \n", pi);
    printf("star looks like  %c \n", star);

    int a,b;
    printf("enter value of a : ");
    scanf("%d", &a);

      printf("enter value of b : ");
    scanf("%d", &b);

    int sum = a + b;
    printf("sum of a and b is %d \n",sum);
    // printf("sum of a and b is %d", a + b);  operation without third variable


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
*/

// Q. Solve int a = 1.999999 and tell whats output here a=1 or a=2
    int a = (int) 1.999999;
    printf("%d \n", a); //output : 1

    // Q. Opertator precedence & Associativity Rule
int k = 5*2-2*3;  //1)5*2/2*3  2)5*(2/2)*3  3)5+2/2*3
printf("%d", k);
    

    return 0;
}