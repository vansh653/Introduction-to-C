// C Program to Implement Passing Array of Structures to Functions
/*Array of structures for student marks for each student
and passing it to function for various operations*/
// To Find TotalMarks Scored by each student.
#include<stdio.h>
//Defining a structure
struct record {
	char name[120];
	int graphics;
	char rollno[80];
	int physics;
	int maths;
	int computer;
	int totalmarks;
} student[50];
// Function Prototype
//function declaration
int final(int, int, int, int);
// Start of Main function
int main() {
	int i, n, totalmarks=0;
	printf("\nHow many students:");
	scanf("%d", &n);
	for(i=0; i<n; ++i) {
		printf("\nName of student:");
		scanf("%s", student[i].name);
		printf("\nEnter roll no.:");
		scanf("%s", student[i].rollno);
		printf("\nMarks in Graphics:");
		scanf("%d", &student[i].graphics);
		printf("\nMarks in Physics:");
		scanf("%d", &student[i].physics);
		printf("\nMarks in Maths:");
		scanf("%d", &student[i].maths);
		printf("\nMarks in Computer Programming:");
		scanf("%d", &student[i].computer);
		//function call
		// passing array of structure as an argument
		totalmarks= final(student[i].graphics, student[i].maths, student[i].computer, student[i].physics);
		printf("\nTotal Marks=%d\n", totalmarks);
	}
	return 0;
	}
	// Function Definition
	int final(int a, int b, int c, int d) {
		int e;
		e= (a+b+c+d);
		return e;
	}

