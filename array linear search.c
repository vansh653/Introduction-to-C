// C program for searching an element in an array using Linear Search
#include<stdio.h>
int main()
{
	//One-Dimensional Array Declaration and Variable Declaration
	int a[20],i,x,n;
	printf("How many elements?");
	scanf("%d",&n);
	// To input elements of one dimensional array by the user
	printf("Enter array elements:\n");
	for(i=0;i<n;++i)
		scanf("%d",&a[i]);
	// Logic of Program
	printf("\nEnter element to search:");
	scanf("%d",&x);

	for(i=0;i<n;++i)
		if(a[i]==x)
			break;

	if(i<n)
		printf("Element found at index %d",i);
	else
		printf("Element not found");

	return 0;
}
