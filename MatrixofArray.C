//Program to Calculate Addition of 2*2 Matrix 
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[2][2],r,c,b[2][2],z[2][2];
	clrscr();
	printf("\n1. Enter 2*2 Matrix :");
	for(r=0;r<=1;r++)
	{
		for(c=0;c<=1;c++)
		{
			scanf("%d",&a[r][c]);
		}
	}
	printf("\n2. Enter 2*2 Matrix :");
	for(r=0;r<=1;r++)
	{
		for(c=0;c<=1;c++)
		{
			scanf("%d",&b[r][c]);
		}
	}
	printf("\nThe First 2*2 Matrix is =\n");
	for(r=0;r<=1;r++)
	{
		for(c=0;c<=1;c++)
		{
			printf("\t%d",a[r][c]);
		}
		printf("\n");
	}
	printf("\nThe Second 2*2 Matrix is =\n");
	for(r=0;r<=1;r++)
	{
		for(c=0;c<=1;c++)
		{
			printf("\t%d",b[r][c]);
		}
		printf("\n");
	}
	printf("\nAddition of Matrix is =\n");
	for(r=0;r<=1;r++)
	{
		for(c=0;c<=1;c++)
		{
			z[r][c]=a[r][c]+b[r][c];
			printf("\t%d",z[r][c]);
		}
		printf("\n");
	}

	getch();

}