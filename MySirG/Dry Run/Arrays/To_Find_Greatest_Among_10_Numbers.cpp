#include<stdio.h>
#include<conio.h>
main()
{
	int a[20],n,i,maxi=0;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	printf("Enter the elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		if(a[i]>maxi)	
			maxi=a[i];
	}	
	printf("Greastest number=%d",maxi);
}
