 #include<stdio.h>
main()
{
	int i,j,k,row;
	printf("Enter number of rows:");
	scanf("%d",&row);
	for(i=1;i<=row;i++)
	{
		k=1;
		for(j=1;j<=row;j++)
		{
			if(j<=i)
			{
				printf("%d",k);
				k=1-k;
			}
			else
				printf(" ");			
		}
		printf("\n");
	}
}  
