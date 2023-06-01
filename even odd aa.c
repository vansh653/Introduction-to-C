/*Program to check whether the input integer number
 is even or odd using the modulus operator (%)
*/
// Header Files
#include<stdio.h>
// Main Function
int main()
{
   // This variable is to store the input number
   int num;
   //Output Statement (prompt)
   printf("Enter an integer: ");
   //Input Statement
   scanf("%d",&num);
   // Modulus (%) returns remainder
   // True if num is perfectly divisible by 2
   if ( num%2 == 0 )
      printf("%d is an even number", num);
   else
      printf("%d is an odd number", num);
   return 0;
}
