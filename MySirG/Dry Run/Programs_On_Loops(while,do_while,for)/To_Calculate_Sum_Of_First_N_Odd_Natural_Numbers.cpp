#include<stdio.h>
main()
{
	int i=1,n,sum=0;
	printf("Enter the value of N:");
	scanf("%d",&n);
	while(i<=n)
	{
		sum+=2*i-1;
		i++;
	}
	printf("Sum of first %d odd natural numbers=%d",n,sum);
}
