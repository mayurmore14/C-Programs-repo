#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char p1[20],p2[20],l;
	clrscr();
	printf("\nEnter Password :");
	scanf("%s",&p1);
	l=strlen(p1);

	if(l>=8)
	{
		printf("\nEnter Confirm Pass :");
		scanf("%s",&p2);
		if(strcmp(p1,p2)==0)
		{
			printf("\nPassword Match");
		}
		else
		{
			printf("\nPassword Not Match");
		}
	}
	else
	{
		printf("\nPassword Must be 8 Char Long");
	}
	getch();

}
