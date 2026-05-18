#include<stdio.h>

int main() {

    
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


    return 0;
}