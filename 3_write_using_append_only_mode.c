//C program to write in a file
// C program for writing the students marks data to file using append only mode.
/*Write a C program to read name and marks of n number of students from user
and store them in a file. If the file already exists, add the information of n students*/
#include <stdio.h>
int main() {
	char name[50];
	int marks,i,n;
	printf("Enter number of students: ");
	scanf("%d",&n);
	FILE *fptr;
	/*Mode “a”: Using this mode Content can be appended at the end of an existing file.
	Like Mode “w”, fopen() creates a new file if file doesn’t exist.
	On unsuccessful open it returns NULL.File Pointer points to: last character of the file*/
	fptr=(fopen("C:\\student.txt","a"));
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
