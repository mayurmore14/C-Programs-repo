//Program to Calculate Armstrong Number
#include<stdio.h>
#include<conio.h>
void main()
{
	int /*=153,*/r,a=0,b=0,t,n;
	clrscr();
	printf("\nEnter Number : ");
	scanf("%d",&n);
	t=n;
	while(n>0)
	{
		r=n%10;
		a=r*r*r;
		printf("\n%d^3=%d",r,a);
		n=n/10;
		b=b+a;
	}
	printf("\nreverse No = %d",b);
	if(t==b)
	{
		printf("\nGiven No is Armstrong No");
	}
	else
	{
		printf("\nGiven No is Not Armstrong No");
	}

	getch();

}