#include<stdio.h>
main()
{
	int k=1,N,i;
	printf("Enter the value of N:");
	scanf("%d",&N);
	for(i=1;i<=N;i++)
		k*=i;
	printf("Product=%d",k);
}
