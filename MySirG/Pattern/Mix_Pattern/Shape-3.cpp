#include<stdio.h>
main()
{
	int i,j,k,m=0,n;
	for(i=1;i<=5;i++)
	{
		if(i%2==1)
			m=m+1;
		else
		{
			m--;
			m=m+i;
		}		
		k=1;
		n=m;
		for(j=1;j<=9;j++)
		{
			if(j<=2*i-1)
			{
				if(k==1)
				{
					printf("%d",n);
					if(i%2)
					{
						n++;m++;
					}
					else
						n--;
				}
				else
					printf("*");
				k=1-k;	
			}
			else
				printf(" ");
		}
		printf("\n");
	}
}
