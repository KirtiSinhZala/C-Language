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


// Q. Solve int a = 1.999999 and tell whats output here a=1 or a=2
    int a = (int) 1.999999;
    printf("%d \n", a); //output : 1

 // Q. Opertator precedence & Associativity Rule
int k = 5*2-2*3;  //1)5*2/2*3  2)5*(2/2)*3  3)5+2/2*3
printf("%d", k);
    


//OPERATORS -> Relation Operator
printf("%d \n", 5 > 3);
printf("%d \n", 5 >= 3);
printf("%d \n", 5 < 3);
printf("%d \n", 5 <= 3);
printf("%d \n", 5 == 3);
printf("%d \n", 5 != 3);

//Logical Operator
printf("%d \n", 4 > 2 && 7 < 10);
printf("%d \n", 55 == 44 && 101 != 101);
printf("%d \n", 5 == 5 || 40 <= 40);
printf("%d \n", !(5 != 10));



//Assignment Operator 
int x,y,z,v,w;
int k,l,m,n,o;
x = y = z = v = w = 10;
k = l = m = n = o = 5;

printf("%d \n", x += k);
printf("%d \n", y -= l);  
printf("%d \n", z *= m);
printf("%d \n", v /= n);
printf("%d \n", w %= o);

// write a program to check if a number is divisible by 2 or not.  same for even and odd
int x;
printf("Enter any Number");
scanf("%d", &x);

printf("%d", x % 2 == 0);  //1 -> divisible  , 0 -> not divisible

//Are the following valid or not
int a = 8^8;
int x;int y = x;
int x, y=x;         //invalid
char stars = '**',  //invalid

//Print 1(true) or 0(false) for following statements
  // a. if it's sunday & it's snowing -> true
int sunday = 1; int snowing = 1;  printf("%d \n", sunday && snowing);

  // b. if it's monday or it's raining -> true
  int monday = 1; int raining = 0;  printf("%d \n", monday || raining);

  // c. if a number is gretear than 9 & less than 100 -> true
  int x; printf("Enter a number \n"); scanf("%d", &x);  printf("%d \n", x > 9 && x < 100);

  */
 
//Conditional Statements
int age = 21;

if(age > 20){
  printf("you are young \n");
}
else {
  printf("you are kid");
}

// if -else if - else
if(age >= 18)
 printf("adult \n");      //only ak statement(ak j kam karavanu che) tethi {curly bracet} na lakhiye to pan xhalse
else if(age >13 && age <18)   
printf("teenager \n");
else printf("child");


//Ternary Operator
age >= 18 ? printf("adult \n") : printf("not adult \n");


    return 0;
}