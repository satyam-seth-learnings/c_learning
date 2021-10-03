#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter the value of A:");
	scanf("%d",&a);
	printf("Enter the value of B:");
	scanf("%d",&b);
	printf("Enter the value of C:");
	scanf("%d",&c);
	printf("Greatest number is %d",a>b?a>b?a:c:b>c?b:c);
}
