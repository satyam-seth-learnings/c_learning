#include<stdio.h>
main()
{
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	if(n/2*2==n)
		printf("Even number");
	else
		printf("Odd number");
}
