#include<stdio.h>
main()
{
	int i,N;
	printf("Enter value of N:");
	scanf("%d",&N);
	for(i=N;i>=1;i--)	//for(i=1;i<=N;i++)
		printf("%d ",i);	//printf("%d ",N+1-i);
}
