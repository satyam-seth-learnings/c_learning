#include<stdio.h>
main()
{
	int year;
	printf("Enter a year:");
	scanf("%d",&year);
	if(year%100==0)
	{
		if(year%400==0)	
			printf("Leep year");
		else
		printf("Not a leep year");
	}	
	else
	{
		if(year%4==0)
			printf("Leep year");	
		else
			printf("Not a leep year");
	}
}
