/*C program to store the information of student marks using
Structures and find total marks of one student at a time*/
// Structure for student marks
#include<stdio.h>
//Defining a structure
struct student {
	char name[100];
	char roll[20];
	char section[5];
	char subject[20];
	int assignment1;
	int assignment2;
	int internalmarks;
};
// Start of Main function
int main() {
	//Declaring Structure variable data separately
	struct student data;
	// To Store Information using Structure
	printf("Enter Name:\n");
	// data is a variable of Student type and name is a member of Student
	scanf("%s", data.name);  //Accessing Structure Members
	printf("Enter Rollno.:\n");
	scanf("%s", data.roll);
	printf("Enter Section:\n");
	scanf("%s", data.section);
	printf("Enter Subject:\n");
	scanf("%s", data.subject);
	printf("Enter Assignment1 Marks:\n");
	scanf("%d", &data.assignment1);
	printf("Enter Assignment2 Marks:\n");
	scanf("%d", &data.assignment2);
	data.internalmarks= data.assignment1+data.assignment2;
	// To display Information using Structure
	printf("Internal Marks:%d\n", data.internalmarks);
	return 0 ;
}
