//write a C program to find the area and perimeter of a square
#include<stdio.h>
//function heading
void main(){
//variable declaration
    float side, area, perimeter;
//output statement (prompt)
    printf("enter the side of the square\n");
//input statement
    scanf("%f", &side);
//Assignment statement
    area= side*side;
    perimeter= 4*side;
//output statement
    printf("the area of the square is %f\n", area);
    printf("the perimeter of the square is %f\n", perimeter);
}
