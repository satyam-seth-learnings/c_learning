#include<stdio.h>
main()
{
	int a,b;
	printf("Enetr the value of A:");
	scanf("%d",&a);
	printf("Enetr the value of B:");
	scanf("%d",&b);
	if(a>b)
		printf("%d is greatest number",a);
	else if(b>a)
		printf("%d is greatest number",b);
	else
		printf("%d and %d are equal",a,b);
}
