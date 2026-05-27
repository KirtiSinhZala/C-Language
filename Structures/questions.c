#include<stdio.h>

//Declarations

struct vector {
    int x;
    int y;
};
void calsum(struct vector v1,struct vector v2, struct vector sum );

struct complex {
    int real;
    int img;
};

typedef struct BankAccount{
    int accountNo;
    char name[100];
} acc;

int main(){
    
//Q. Create a structure to store vectores.Then make a function to return sum of 2 vectors.
 struct vector v1 = {5, 10};
 struct vector v2 = {3, 7};
 struct vector sum = {0};

 calsum(v1, v2, sum);

 //Q. Create a structure to store complex numbers(use arrow operator).
 struct complex number1 = {8, 19};
 struct complex *ptr = &number1;
 printf("real number is : %d\n", ptr->real);
 printf("img number is : %d\n", ptr->img);

 //Q. Make a structure to store Bank Account information of a customer of ABC bank. Also, make an alias for it.
 acc account1 = {123, "nilesh"};
 acc account2 = {234, "dhoni"};
 acc account3 = {456, "mahi"};

 printf("account no is : %d\n", account1.accountNo);
 printf(" name is : %s\n", account1.name);

    return 0;
}


// Definitions

void calsum(struct vector v1, struct vector v2, struct vector sum) {
 sum.x = v1.x + v2.x;
 sum.y = v1.y + v2.y;

 printf("sum of x is : %d \n", sum.x);  //IN FUNCTION , STRUCTURE PASS AS CALL BY VALUE SO we printf value in function or make pointer
 printf(" sum of y is : %d\n", sum.y);  //because directly update not posible
}