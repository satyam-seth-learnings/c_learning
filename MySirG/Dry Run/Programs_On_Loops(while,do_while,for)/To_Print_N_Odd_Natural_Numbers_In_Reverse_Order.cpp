#include<stdio.h>
main()
{
	int N;
	printf("Enter the value of N:");
	scanf("%d",&N);
	while(N)
	{
		printf("%d ",2*N-1);
		N--;
	}
}
