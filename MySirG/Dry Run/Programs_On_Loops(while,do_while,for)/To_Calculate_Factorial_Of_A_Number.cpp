#include<stdio.h>
main()
{
	int n,f=1,x;
	printf("Enter the number:");
	scanf("%d",&n);
	x=n;
	while(n>=1)
	{
		f*=n;
		n--;
	}
	printf("Factorial Of %d=%d",x,f);
}
