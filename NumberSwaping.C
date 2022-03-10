#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	printf("\n Enter No :");
	scanf("%d",&a);
	printf("\nEnter 2nd No :");
	scanf("%d",&b);
	b=a+b;
	a=b-a;
	b=b-a;
	printf("\nA=%d",a);
	printf("\nB=%d",b);
	getch();
}