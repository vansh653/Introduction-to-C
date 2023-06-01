// Program to find euclidean distance between two points in a plane.
// Header Files
#include<stdio.h>
#include<math.h>
// Function Heading
int main() {
	// Variable Declaration
	float x1, x2, y1, y2;
	float a,b,distance;
	// Output Statement (Prompt)
	printf("\nEnter the x quadrant of point a: \n");
	// Input Statement
	scanf("%f", &x1);
	// Output Statement (Prompt)
	printf("\nEnter the  y quadrant of point a: \n");
	// Input Statement
	scanf("%f", &y1);
	// Output Statement (Prompt)
	printf("\nEnter the x quadrant of point b: \n");
	// Input Statement
	scanf("%f", &x2);
	// Output Statement (Prompt)
	printf("\nEnter the  y quadrant of point b: \n");
	// Input Statement
	scanf("%f", &y2);
	// Assignment Statement
	a= (x2-x1)*(x2-x1);
	b= (y2-y1)*(y2-y1);
	distance= sqrt(a+b);
	printf("\nThe distance between the given points is %f", distance);
	return 0;
}
