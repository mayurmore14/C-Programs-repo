//Program to Find Odd and Even Numbers
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],i,o,e;
	clrscr();
	printf("\nEnter Numbers :");
	for(i=0;i<11;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nODD");
	printf("\tEVEN");
	for(i=0;i<11;i++)
	{
		if(a[i]%2==0)
		{
			printf("\n%d",a[i]);
		}
		else
		{
			printf("%d",a[i]);
		}
	}

	getch();
}