#include<stdio.h>
#include<string.h>

// structures are colllection of values of different data types
// structure -> user defined Data Type

//SYNTAX :Definition
    struct student{            
        char name[100];         
        int roll;             
        float cgpa;
    };
    
void printInfo(struct student s3);  

int main(){ 
    struct student s1;        //create structure variable 
    s1.cgpa = 7.6;          // update with value 
 //    s1.name = "mehul";      ERROR bcoz we define name as string notation so we can't directly assign value in variable
 // if we define with pointer notation then we can assign directly any string value    OR     we can use strcpy(s1.name, "mehul") function
    strcpy(s1.name, "mehul");
    s1.roll = 100;  
    // OR 
    struct student s2 = {"hitesh", 155, 7.0};   //initializeing structure


    printf("name is : %s \n", s1.name);       //ACCESS with normal structure variable 
    printf("(normal structure variable) cgpa is :%f \n", s1.cgpa);
//POinters to structures
    struct student *ptr = &s1;
    printf("(Pointer)cgpa is : %f \n", (*ptr).cgpa);     //ACCESS with pointer  
   // printf("cgpa is : %f \n", *ptr.cgpa);  OR *(ptr).cgpa   FALSE SYNTAX of pointer


//Arrow Operator
    printf(" (Arrow Operator)cgpa is : %f \n", ptr->cgpa); //for  not be confused of Pointer syntax 

//Passing structure to function
    struct student s3 = {"kirti", 1, 9.98};
    printInfo(s3);
    printf("student.roll : %d \n", s3.roll);

 return 0;
}

void printInfo(struct student s3){
    printf("student.name = %s \n", s3.name);
    printf("student.roll : %d \n", s3.roll);
    printf("student.cgpa : %f\n", s3.cgpa);

    s3.roll = 2; //STRUCTURE USE : CALL BY VALUE SO DONT CHANGED VALUE
}