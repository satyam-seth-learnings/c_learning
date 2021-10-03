#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int i,n,sum=0;
	printf("Enter the value of n:");
	scanf("%d",&n);
	int *p=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
	
		scanf("%d",(p+i));
	for(i=0;i<n;i++)
		sum+=*(p+i);
	printf("Sum: %d",sum);
	getch();
	return 0;
}
