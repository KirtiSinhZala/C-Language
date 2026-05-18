#include<stdio.h>

int main() {
 /* 
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

  

//Q Writw a program to give grades to a student 
    int marks;
    printf("Enter marks :");
    scanf("%d", &marks );

    if(marks < 33 && marks >= 0) {
      printf("F");
    } 
    else if(marks >= 33 && marks <= 50) {
      printf("C");
    }
    else if(marks > 50 && marks <= 70){
      printf("A");
    }
    else if(marks > 70 && marks <= 85){
      printf("A+");
    }
    else if(marks >85 && marks <= 100){
      printf("U");
    } else{
      printf("Wrong Marks Entered");
    }

// Q what is output of following code : A) give error B). Print x is equal to 1  C) print X is not equal to 1

    int x = 2;
    if(x=1){  //Here In C,  0 = FALSE , 1 or other values are treated as TRUE
      printf("x is equal to 1");
    }else{
      printf("x is not equal to 1");
    }

     */

// Write a program to find if a character entered by user is upper case or not.
    char ch;
    printf("Enter any Upper case character :");
    scanf("%c", &ch);

    if(ch >= 'A' && ch <= 'Z'){
      printf("You Entered Upper case character : %c", ch);
    }
    else if(ch >= 'a' && ch <= 'z') {
      printf("you entered lower case character : %c", ch);
    } else{
      printf("Wrong character entered");
    }

    return 0;
}