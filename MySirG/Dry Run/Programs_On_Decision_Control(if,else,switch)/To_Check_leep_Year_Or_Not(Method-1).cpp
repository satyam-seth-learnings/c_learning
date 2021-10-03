#include<stdio.h>
main()
{
	int year;
	printf("Enter a year:");
	scanf("%d",&year);
	if(year%4)
		printf("Not a leep year");
	else if(year%100)	
		printf("Leep year");
	else if(year%400)
		printf("Not a leep year");
	else
		printf("Leep year");	
}
