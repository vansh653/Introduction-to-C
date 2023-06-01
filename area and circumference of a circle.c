//write a C program to find the area and circumference of a circle
#include<stdio.h>
//function heading
void main(){
//variable declaration
    float radius, area, circumference;
//output statement (prompt)
    printf("enter the radius of the circle\n");
//input statement
    scanf("%f", &radius);
//Assignment statement
    area= 3.14*radius*radius;
    circumference= 2*3.14*radius;
//output statement
    printf("area of the circle is %f\n", area);
    printf("circumference of the circle is %f\n", circumference);
}
