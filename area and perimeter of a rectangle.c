//write a C program to find the area and perimeter of a rectangle
#include<stdio.h>
//function heading
void main(){
//variable declaration
    float length, breadth, area, perimeter;
//output statement (prompt)
    printf("enter the length of the rectangle\n");
//input statement
    scanf("%f", &length);
//output statement (prompt)
    printf("enter the breadth of the rectangle\n");
//input statement
    scanf("%f", &breadth);
//Assignment statement
    area= length*breadth;
    perimeter= 2*(length+breadth);
//output statement
    printf("the area of the rectangle is %f\n", area);
    printf("the perimeter of the rectangle is %f\n", perimeter);
}
