#include<stdio.h>
#include<conio.h>
main()
{
	int a[20],i,n,oddsum=0,evensum=0;
	printf("Enter the Number of elements:");
	scanf("%d",&n);
	printf("Enter the elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)	
	{
		if(a[i]%2==0)
			evensum+=a[i];
		else
			oddsum+=a[i];
	}
	printf("Sum of even numbers=%d",evensum);
	printf("\nSum of odd numbers=%d",oddsum);
}
