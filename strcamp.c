// Program to Implement strcmp function
#include <stdio.h>
#include <string.h>
int main() {
    //string1 and string2 are character arrays
    char string1[20], string2[20];
    int result;
    printf("\nEnter first string: ");
    /*The gets() function enables the user to enter some characters
    and get stored in a character array*/
    gets(string1);
    printf("\nEnter second string: ");
    gets(string2);
    // The strcmp function compares two strings and stores the value in result variable.
    result = strcmp(string1, string2);
    // It has value 0 if both the strings are equal.
    if (result == 0)
        printf("\nBoth strings are equal");
    /* If they are not equal, returns a nonzero integer.
    The magnitude of the output value depends on the compiler that you use.
    This value can differ in simulation and generated code*/
    else
        printf("\nBoth strings are not equal");
    printf("\nValue of result: %d" , result);
    return 0;
}
