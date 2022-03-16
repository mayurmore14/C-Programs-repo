//Program to Find Smaller Number From Given Numbers
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],i,small;
	clrscr();
	printf("\nEnter Any No. :");
	for(i=0;i<3;i++)
	{
		scanf("%d",&a[i]);
	}
	small=a[0];
	for(i=0;i<3;i++)
	{
		if(small>a[i])
		{
			small=a[i];
		}
	}
	printf("\nSmall No.is =%d",small);

	getch();
}