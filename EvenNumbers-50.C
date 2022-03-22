/* program to generate even Numbers from 1 to 50 using for loop */
#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	clrscr();
	for(i=1;i<=50;i++)
	{
		if(i%2==0)
		{
			printf("\n%d",i);
		}
	}

	getch();

}
