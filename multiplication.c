//write a C program using multiplication operator
#include<stdio.h>
//function heading
void main(){
//variable declaration
    int var1, var2, product;
//output statement (prompt)
    printf("enter the two numbers to be multiplied\n");
//input statement
    scanf("%d%d", &var1, &var2);
//Assignment statement
    product=var1*var2;
//output statement
    printf("%d*%d=%d", var1, var2, product);
}
