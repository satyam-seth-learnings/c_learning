#include<stdio.h>
int main()
{
	int a,b;
	float c;
	printf("Enter Two Numbers:\n");
	scanf("%d%d",&a,&b);
	c=(float)(a+b)/(a-b);
	printf("Result:%0.2f",c);
	return 0;
}
