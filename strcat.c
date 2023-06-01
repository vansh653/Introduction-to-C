// Program to Implement strcat function
#include<stdio.h>
#include<string.h>
int main()
{
    // Declaring String Variables. string1 and string2 are character arrays
    char string1[40];
    char string2[40];
    // Output Statement (prompt)
    printf("Enter first string: ");
    /*The gets() function enables the user to enter some characters
    and get stored in a character array*/
    gets(string1);
    printf("Enter second string: ");
    gets(string2);
    printf("\nConcatenating first and second string .. \n\n");
    // The strcat function joins two strings together
    // string2 is appended to string1
    strcat(string1, string2);
    // Output Statements
    printf("First string: %s\n", string1);
    printf("Second string: %s", string2);
    // signal to operating system program ran fine
    return 0;
}
