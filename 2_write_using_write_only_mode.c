//C program to write in a file
// C program for writing the students marks data to file using write only mode.
/*C program to read name and marks of n number of students
from user and store them in a file*/
#include <stdio.h>
int main() {
	char name[50];
	int marks,i,n;
	printf("Enter number of students: ");
	scanf("%d",&n);
	FILE *fptr;
	/*Mode “w”: It is a write only mode.
	The fopen() function creates a new file when the specified file
	doesn’t exist and if it fails to open file then it returns NULL*/
	fptr=(fopen("C:\\student.txt","w"));
	if(fptr==NULL) {
		printf("Error!");
	}
	for (i=0;i<n;i++) {
		printf("For student%d\nEnter name: ",i+1);
		scanf("%s",name);
		printf("Enter marks: ");
		scanf("%d",&marks);
		fprintf(fptr,"\nName: %s \nMarks=%d \n",name,marks);
	}
	fclose(fptr);
	return 0;
}
