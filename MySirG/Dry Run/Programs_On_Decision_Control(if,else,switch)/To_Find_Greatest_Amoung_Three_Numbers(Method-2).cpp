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
	else
	{
		if(b>c)	
			k=b;
		else	
			k=c;
	
	}
	printf("Greatest number is %d",k);
}
