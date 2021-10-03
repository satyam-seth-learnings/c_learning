#include<stdio.h>
main()
{
	int N,i,k=0;
	printf("Enter the value of N:");
	scanf("%d",&N);
	for(i=1;i<=N;i++)
		k+=i;
	printf("Sum=%d",k);
}
