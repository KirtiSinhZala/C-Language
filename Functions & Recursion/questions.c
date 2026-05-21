#include<stdio.h>
#include<math.h>


float squareArea(float side);
float circleArea(float rad);
float rectangleArea(float a, float b);
float convertTemp(float celsius);


int main() { 
//Q. use library function to calculate the square of a number given by user.
   int n=4;
   printf("%f \n", pow(n,2));

// Q. write functions to calculate area of a square,a circle & a rectangle.
    float a=5.0;
    float b=10.0;
    float rad =1;
    float side = 4;
    printf("rectangleArea is %f \n", rectangleArea(a,b));
     printf("circleArea is %f \n", circleArea(rad));
      printf("squareArea is %f \n", squareArea(side));

      float far = convertTemp(37);
      printf(" far : %d \n", far);
   return 0;
}

//function Defination
float squareArea(float side){
    return side * side;
}

float circleArea(float rad){
    return 3.14 *rad * rad;
}

float rectangleArea(float a, float b){
    return a * b;
}

float convertTemp(float celsius){
    float far = celsius * (9.0/5.0) + 32;
    return far;
}