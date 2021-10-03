#include<stdio.h>
main()
{
	int a,b,c,k;
	printf("Enter the value of A:");
	scanf("%d",&a);
	printf("Enter the value of B:");
	scanf("%d",&b);
	printf("Enter the value of C:");
	scanf("%d",&c);
	if(a>b&&a>c)
		k=a;
	if(b>a&&b>c)	
		k=b;
	if(c>a&&c>b)	
		k=c;
	printf("Greatest number is %d",k);
}
