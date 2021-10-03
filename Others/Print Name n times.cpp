#include<stdio.h>
#include<conio.h>
void printname(int);
int main()
{
	int n;
	printf("Enter the value of n:");
	scanf("%d",&n);
	
//	Recursion
	printname(n);
	
//	Loop
//	for(int i=1;i<=n;i++)
//		printf("%d- Satyam Seth\n",i);
	
	return 0;
}
void printname(int n)
{
	int static i=1;
	if (n<=0)
		return;
	printf("%d- Satyam Seth\n",i);
	i++;
	printname(n-1);
}
