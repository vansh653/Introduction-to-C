// Program to Implement strcpy function
#include <stdio.h>
#include <string.h>
// Start of main function
int main() {
   	//string1 and string2 are character arrays
	// Contents of string1 is "C programming"
	// String2 is empty
   char string1[20] = "C programming";
   char string2[20];
   // copying string1 to string2
   strcpy(string2, string1);
   //The puts() function is used to print the string on the console
   puts(string2); // C programming
   // signal to operating system program ran fine
   return 0;
}
