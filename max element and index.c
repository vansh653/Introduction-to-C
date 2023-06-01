//Program to find max element and index in array
#include <stdio.h>
int main() {
  int a[100], i, j, n, max, index;
  printf("\n\t\tWelcome to the Program\n");
  printf("Enter the number of terms you want to enter in the array:-  ");
  scanf("%d", &n);
  printf("\nEnter the elements\n");
  // This loop Stores number entered by the user
  for(i = 0; i < n; ++i) {
    scanf("%d", &a[i]);
  }
	max= a[n-1];
	// Loop to store largest number to max
	for(j = 0; j < n; ++j) {
    // Change < to > if you want to find the smallest element
    if(max< a[j]) {
      max= a[j];
      index=j;
    }
  }
  printf("\nThe maximum(largest) element is\t %d\nand the index is %d\n", max, index);
	return 0;
}
