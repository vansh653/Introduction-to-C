// Write a program to find the number is palindrome or not.
// Header Files
#include <stdio.h>
// Start of main function
int main() {
  // variable Declaration
  int n, r = 0, t;
  // Output Statement (prompt)
  printf("Enter a number to check if it's a palindrome or not\n");
  //Input Statement
  scanf("%d", &n);
  t = n;
  // Logic of program
  while (t != 0) {
    r = r * 10;
    r = r + t%10;
    t = t/10;
  }
  if (n == r)
    printf("%d is a palindrome number.\n", n);
  else
    printf("%d isn't a palindrome number.\n", n);
  return 0;
}
