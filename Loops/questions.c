#include<stdio.h>

int main() {
/*
//Q. Print the numbers from 0 to n , if n is given by user.
    int n;
    printf("Enter any number :");
    scanf("%d ", &n);

    int i = 1;
    while(i <= n){
        printf("%d \n",i);
        i++;
    }
 
//Keep taking numbers as input from user until user enters an odd number.
    int n;
    do{
        printf("Enter number :");
        scanf("%d", &n);
        printf("%d \n",n);

        if(n % 2 != 0){
            break;
        }
    }while(1); //true
    printf("Thank you");


//keep taking numbers as input from user until user enters a number which is multiple of 7.
    int n;
    do{
        printf("Enter any number :");
        scanf("%d", &n);
        printf("%d \n", n);

        if(n % 7 == 0){  //multiply of 7  
            break;
        }
    }while(1);
    printf("You entered right number");

//print all numbers from 1 to 10 except for 6.
     for(int i=1; i<=10; i++){
      if(i==6){   //only skip matches this condition value
        continue;
      }
      printf("%d \n",i);
    }

//print all the odd numbers from 5 to 50.
    for(int i=5; i<=50; i++){
        if(i % 2 != 0){
            printf("%d \n", i);
        }
    }
 */
//print the factrial of a number n.
    int n;
    printf("enter number :");
    scanf("%d", &n);

    int fact = 1;
    for(int i=1; i<=n; i++){
        fact = fact * i;
    }
    printf("final factorial is %d", fact);

    return 0;
}