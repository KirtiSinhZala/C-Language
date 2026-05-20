#include<stdio.h>

//Declaration/ Prototype
int sum(int x, int y);
void printTable(int n);
void calculatePrice(float value);


int main() {
    float value = 100.0;
    calculatePrice(value);
    printf("value is : %f \n", value); 

    int n;
    printf("Enter any Number :");
    scanf("%d", &n);

    int a;
    printf("Enter first Number :");
    scanf("%d", &a);

    int b;
    printf("Enter second Number :");
    scanf("%d", &b);

    //Function calling
    int s = sum(a, b);
    printf("sum is :%d \n",s);
    printTable( n);     // argument/ actual parameter

    return 0;
}

//function Defination
int sum( int x, int y){
    return x + y;
}

void printTable(int n){         // parameter/formal parameter
    for(int i=1; i<=10; i++){
        printf("%d \n", i*n);
    }
}

void calculatePrice(float value){
    value = value + (0.18 * value);
    printf("final price is : %f \n", value);
}