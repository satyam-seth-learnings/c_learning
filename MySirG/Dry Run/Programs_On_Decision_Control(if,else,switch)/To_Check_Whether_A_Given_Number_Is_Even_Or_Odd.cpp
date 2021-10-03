#include<stdio.h>
main()
{
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	if(n%2)
		printf("%d is odd number",n);
	else
		printf("%d is even number",n);
}
