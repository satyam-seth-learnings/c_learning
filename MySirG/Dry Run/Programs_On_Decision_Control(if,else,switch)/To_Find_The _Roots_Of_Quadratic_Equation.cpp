#include<stdio.h>
#include<math.h>
main()
{
	int a,b,c,D;
	float x,y;
	printf("Enter the cofficient of X^2(Value of a):");
	scanf("%d",&a);
	printf("Enter the cofficient Of X(Value of b):");
	scanf("%d",&b);
	printf("Enter the constant(value of c):");
	scanf("%d",&c);
	D=b*b-4*a*c;
	if(D<0)
		printf("Both roots are imaginary");
	if(D==0)
	{
		printf("Both roots are equal");
		x=-b/(2.0*a);
		printf("Root is %0.4f",x);
	}	
	if(D>0)
	{
		printf("Roots are real and distinct");
		x=(-b+sqrt(D))/(2*a);
		y=(-b-sqrt(D))/(2*a);
		printf("Roots are %0.4f,%0.4f",x,y);
	}
}
