// Program to calculate area of circle, square and rectangle based on user choice
// Start of the Program
#include<stdio.h>
int main() {
	// Declare the variables
	int choice;
	float area;
	float radius, side, length, breadth;
	// Present the menu
	printf(" ** Menu for Area of figures **");
	printf("\n 1. Circle");
	printf("\n 2. Square");
	printf("\n 3. Rectangle");
	// Ask user for choice of figure
	printf("\nWhich area do you want to calculate?\nEnter your choice:");
	scanf("%d", &choice);
	if(choice==1) {
		printf("\nEnter the radius of the circle:");
		scanf("%f", &radius);
		area= 3.14*radius*radius;
		printf("Area of circle is: %f", area);
	}
	else if (choice==2) {
		printf("\nEnter the side of the square:");
		scanf("%f", &side);
		area= side*side;
		printf("Area of square is: %f", area);
	}
	else if (choice==3) {
		printf("\nEnter the length of rectangle:");
		scanf("%f", &length);
		printf("\nEnter the breadth of rectangle:");
		scanf("%f", &breadth);
		area= length*breadth;
		printf("Area of rectangle is: %f", area);
	}
	else {
		printf("\nEnter the correct choice");
	}
	return 0;
}
