// C program to find largest number among “N” numbers using for loop
// Maximum of n numbers using for loop
// Header Files
#include <stdio.h>
// Start of main function
int main()
{
  // Varibale Declaration
  int i,num,n,large=0;
  // Output Statement (prompt)
  printf("How many numbers: ");
  //Input Statement
  scanf("%d",&n);
  // Logic of Program
  for(i=0; i<n; i++)
  {
    printf("\nEnter number %d: ",i+1);
    scanf("%d",&num);
    if(num>large)
    large=num;
  }
  printf("\n\nThe Largest Number is %d",large);
  return 0;
}
