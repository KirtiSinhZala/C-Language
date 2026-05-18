#include<stdio.h>

int main() {

    
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
 
//switch 
int day; 
printf("Enter day(1-7) : ");
scanf("%d",&day);

switch(day) {

  case 1 : printf("monday \n");
  break;

  case 2 : printf("tuesday \n");
  break;

  case 3 : printf("wednesday \n");
  break;

  case 4 : printf("thursday \n");
  break;

  case 5 : printf("friday \n");
  break;

  case 6 : printf("saturday \n");
  break;

  case 7 : printf("sunday \n");
  break;

  default : printf("Wrong day entered");
}
 
return 0;
}