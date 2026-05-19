#include<stdio.h>

int main() {

//Special Things 
    //1) increment , decrement operator must check
    //2) Loop counter can be float or even character
    //3) not be infinite loop

// for Loop

    for(int i = 1; i<=10; i++){
      printf(" Hello : %d \n", i); 
    }

    for(float i = 1.0; i<=10.0; i++){
      printf("%f \n", i); 
    }

    for(char i = 'A'; i<='Z'; i++){
      printf("%c \n", i); 
    }


//while Loop
    int i = 1;
    while(i <= 5){
     printf("%d \n", i);
     i++;
    }

// do-while Loop
    int j = 1;
    do{
        printf("%d \n", j);
        j++;
    }while(j <= 10);

// Break statement
    for(int i=1; i<=5; i++){
      if(i==3){ 
        break;  //use for not include this condition and its upcoming values
      }
      printf("%d \n", i);
    }
    printf("end");

//continue statement 
    for(int i=1; i<=10; i++){
      if(i==3){   //skip
        continue;
      }
      printf("%d \n",i);
    }


  return 0;
}