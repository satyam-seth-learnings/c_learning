C#include<stdio.h>
#include<conio.h>
main()
{
	FILE *fp;
	char ch;
	fp=fopen("Raman.txt","w");
	printf("Input Line And Press EOF");
	while((ch=getchar()!=EOF))
	{
		putc(ch,fp);
	}
	fclose(fp);
	printf("Output");
	fp=fopen("Raman.txt","r");
	while((ch=getc(fp))!=EOF)
	{
		printf("%c",ch);
	}
	fclose(fp);
	getch();
}
