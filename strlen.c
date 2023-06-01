// Program to Implement strlen function
#include<stdio.h>
#include<string.h>
 // Start of main function
int main() {
    // variable Declaration
    int len;
    // job array can store only 30 characters including '\0'
    char job[30];
    // Output Statement (prompt)
    printf("Enter your dream job: ");
    /*The gets() function enables the user to enter some characters
    and get stored in a character array*/
    gets(job);
    // calculate length of characters in job
    len = strlen(job);
    // Output Statement
    printf("Your dream job %s has %d characters in it", job, len);
    // signal to operating system program ran fine
    return 0;
}
