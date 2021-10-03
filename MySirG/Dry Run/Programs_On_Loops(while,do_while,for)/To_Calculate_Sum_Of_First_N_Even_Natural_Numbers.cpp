#include<stdio.h>
main()
{
	int n,i=2,sum=0;
	printf("Enter the value of N:");
	scanf("%d",&n);
	while(i<=2*n)
	{
		sum+=i;
		i+=2;
	}
	printf("Sum Of %d even numbers=%d",n,sum);
}
