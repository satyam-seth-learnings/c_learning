#include<stdio.h>
#include<conio.h>
main()
{
	int a[20],n,i,j,temp,min;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	printf("Enter the elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	min=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]<min)
			min=a[i];
	}
	printf("Smallest number=%d",min);
}

