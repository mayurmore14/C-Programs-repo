/* Program to Generate Odd Numbers from 1 to 50 Using While Loop */
#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	clrscr();
	i=1;
	while(i<=50)
	{
		if(i%2!=0)
		{
			printf("\n%d",i);
			i++;
		}
	}
	getch();
}