//write a C program using subtraction operator
#include<stdio.h>
//function heading
void main(){
//variable declaration
    int var1, var2, difference;
//output statement (prompt)
    printf("enter the two numbers to be subtracted\n");
//input statement
    scanf("%d%d", &var1, &var2);
//Assignment statement
    difference=var1-var2;
//output statement
    printf("%d-%d=%d", var1, var2, difference);
}
