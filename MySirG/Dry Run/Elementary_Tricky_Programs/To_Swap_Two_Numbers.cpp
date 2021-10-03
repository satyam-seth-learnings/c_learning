#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter the value of A:");
	scanf("%d",&a);
	printf("Enter the value of B:");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("Value of A: %d\nValue of B: %d",a,b);
}
