#include<stdio.h>
main()
{
	int i,j;
	for(i=1;i<=7;i++)
	{
		for(j=1;j<=7;j++)
		{
			if(j==i||j==8-i)
			{
				if(j==8-i)	//if(j==i)
					printf("/");	//printf("\\");
				else
					printf("\\");	//printf("/");
			}
			else
				printf("*");			
		}
		printf("\n");
	}
}
