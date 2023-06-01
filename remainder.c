//write a C program using remainder operator
#include<stdio.h>
//function heading
void main(){
//variable declaration
    int var1, var2, remainder;
//output statement (prompt)
    printf("enter dividend and divisor\n");
//input statement
    scanf("%d%d", &var1, &var2);
//Assignment statement
    remainder=var1%var2;
//output statement
    printf("the remainder is %d", remainder );
}
