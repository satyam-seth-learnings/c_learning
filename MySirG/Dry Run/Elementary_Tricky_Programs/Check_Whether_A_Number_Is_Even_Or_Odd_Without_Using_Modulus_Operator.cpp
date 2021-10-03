#include<stdio.h>
main()
{
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	if(n&1)
		printf("Odd number");
	else
		printf("Even number");
}
