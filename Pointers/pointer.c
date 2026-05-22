#include<stdio.h>

int main(){ /* 
    // & -> get address , * -> get value of address

    int age = 21;
    int *ptr = &age;
    int addresOfAge = &age;
    int valueOfAge = *ptr;

//formet specifier -> %d not use for get address
    printf("%d \n", valueOfAge);
      printf("%d \n", *ptr);
        printf("%d \n", &age);
        printf("%d \n", addresOfAge);

//Treditional method to get address of any variable and pointer variable
    int price = 100;
    int *PTR = &price;

// to get address
    printf("%p \n", &price); //%p ->  hexadicimal value of address
    printf("%u \n", &price); //%u(unsign int) -> numerical value of address
    printf("%u \n", PTR);
    printf("%u \n", &PTR);//address of Pointer variable

// to get value at address
    printf("%d \n", price);
     printf("%d \n", *PTR);
      printf("%d \n", *(&price));
*/

//

    return 0;
}