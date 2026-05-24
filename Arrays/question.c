#include<stdio.h>

int countOdd(int arr[], int n);
void reverseArray(int arr[], int n);
void printArr(int arr[], int n);

int main() {    //
   
/*
//Q. write a function to count the number of odd numbers in an array.
    int arr[] = {1,2,3,4,5};
    printf("%d \n",countOdd(arr,6));
 
//for the given array, what will the following give?  a. *(arr+2)  b. *(arr+5)
    int arr[] = {1,2,3,4,5};
    printf("%d \n",*(arr+2));
    printf("%d \n",*(arr+5));
 */
//write a function to reverse an array.
    int arr[] = {1,2,3,4,5};
    reverseArray(arr,5);
    printArr(arr,5);


    return 0;
}

void reverseArray(int arr[], int n){
    for(int i=0; i<n/2; i++){
       int firstValue = arr[i];
       int secondValue = arr[n-i-1];
        arr[i] = secondValue;
        arr[n-i-1] = firstValue;
    }
}

void printArr(int arr[], int n) {
    for(int i=0;i<n; i++){
        printf("%d \t",arr[i]);
    }
}

int countOdd(int arr[], int n){
    int count = 0;
    for(int i=0;i<n;i++){
        if(arr[i] % 2 != 0){
            count++;
        }
    }
    return count;
}