#include<stdio.h>
int main()
{
	int a,b,c;
	float d;
	printf("Enter Three Numbers:\n");
	scanf("%d%d%d",&a,&b,&c);
	d=(float)(a+b+c)/3;
	printf("Average:%0.2f",d);
	return 0;
}
