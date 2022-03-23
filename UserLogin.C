#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{	char p1[20],p2[20],u[20]="admin",p[20]="admin123";
	clrscr();
	printf("\nEnter Username :");
	scanf("%s",&p1);
	printf("\nEnter Password :");
	scanf("%s",&p2);
	if(strcmp(p1,u)==0)
	{
		if(strcmp(p2,p)==0)
		{
			printf("\nWelcome Admin");
		}
		else
		{
			printf("\nWrong Password");
		}
	}
	else
	{
		printf("\nWrong Candidate");
	}

	getch();

}