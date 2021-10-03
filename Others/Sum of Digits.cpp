#include<stdio.h>
#include<conio.h>
int main()
{
	int num,sum=0;
	printf("Enter The Number:");
	scanf("%d",&num);
	while(num>0)
	{
		sum+=num%10;
		num/=10;
	}
	printf("Sum of Digits: %d",sum);
	getch();
	return 0;
}
