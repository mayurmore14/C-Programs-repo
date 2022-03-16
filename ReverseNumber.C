//program to input an array and display it in reverse order
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],i,n;
	clrscr();
	printf("\nEnter Element of Array :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Elements =%d :",i);
		scanf("%d",&a[i]);
	}
	printf("\nReverse of Elements =");
	for(i=n-1;i>=0;i--)
	{
		printf("%d",a[i]);
	}

	getch();
}