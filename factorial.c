// Program to find factorial of a number using for loop
// Header Files
#include<stdio.h>
// Main Function
int main() {
	// Variable Declaration
	int i,factorial=1,number;
	// Output Statement (prompt)
	printf("Enter a number: ");
	//Input Statement
	scanf("%d",&number);
	// Assignment Statement (Logic Calculation)
	for(i=1;i<=number;i++) {
		factorial=factorial*i;
	}
	// Output Statement
	printf("Factorial of %d is: %d",number,factorial);
	return 0;
}
