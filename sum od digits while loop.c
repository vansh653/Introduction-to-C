//C Program to calculate Sum of Digits of a Number using While Loop
//Header Files
#include <stdio.h>
// Start of main function
int main()
{
  // Varibale Declaration
  int Number, Reminder, Sum=0;
  // Output Statement (prompt)
  printf("\n Please Enter any number\n");
  //Input Statement
  scanf("%d", &Number);
  // Logic of Program
  while(Number > 0)
  {
     Reminder = Number % 10;
     Sum = Sum+ Reminder;
     Number = Number / 10;
  }
  printf("\nSum of the digits of Given Number = %d", Sum);
  return 0;
}
