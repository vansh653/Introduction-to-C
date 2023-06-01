// Program to print Fibonacci Sequence up to a certain number using for loop
// Header Files
#include<stdio.h>
// Main Function
int main ()
{
 // Variable Declaration
  int first = 0, second = 1, third, i, n;
 // Output Statement (prompt)
  printf ("Enter the length of the fibonacci series \n");
 //Input Statement
  scanf ("%d", &n);
  // Displays the first two terms which is always 0 and 1
  printf ("The Fibonacci series is :\n");
  printf ("%d%d", first, second);
  // Assignment Statement (Logic Calculation)
  for (i = 2; i <= n; i++)
    {
      third = first + second;
      printf ("%d ", third);
      first = second;
      second = third;
    }
  return 0;
}
