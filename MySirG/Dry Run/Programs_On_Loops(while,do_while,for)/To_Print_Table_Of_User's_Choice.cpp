#include<stdio.h>
main()
{
	int t,i;
	printf("Enten the number:");
	scanf("%d",&t);
	for(i=1;i<=10;i++)
		printf("%dx%d=%d\n",t,i,t*i);
}
