//write a C program using addition operator
#include<stdio.h>
//function heading
void main(){
//variable declaration
    int var1, var2, sum;
//output statement (prompt)
    printf("enter the two numbers to be added\n");
//input statement
    scanf("%d%d", &var1, &var2);
//Assignment statement
    sum=var1+var2;
//output statement
    printf("%d+%d=%d", var1, var2, sum);
}
