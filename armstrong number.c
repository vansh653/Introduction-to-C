//C program to Check Armstrong Number of n digits using while loop
//Header Files
#include <math.h>
#include <stdio.h>
// Start of main function
int main() {
     // Varibale Declaration
    int num, originalNum, remainder, n = 0, result = 0, power;
    // Output Statement (prompt)
    printf("Enter an integer: ");
    //Input Statement
    scanf("%d", &num);
    // Logic of Program
    originalNum = num;
    while (originalNum != 0) {
        originalNum=  originalNum/10;
        n++;
    }
    originalNum = num;
    while (originalNum != 0) {
        remainder = originalNum % 10;
        power = round(pow(remainder, n));
        result= result+power;
        originalNum=  originalNum/10;
    }
    if (result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);
    return 0;
}
