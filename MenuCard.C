#include<stdio.h>
#include<conio.h>
void main()
{

	int o,q,d=0,t=0,bill=0;
	clrscr();
	printf("\n\t***MENU***");
	printf("\n1. Ice Creame Rs.25 :");
	printf("\n2. Cone Rs.30 :");
	printf("\n3. Pestries Rs.50 :");
	printf("\nEnter the Order No :");
	scanf("%d",&o);
	printf("\nEnter the Quantity of Order :");
	scanf("%d",&q);
	if(o==1)
	{
		printf("\nYour Order is Ice creame");
		t=q*25;
		printf("\nTotal price is :%d",t);
		printf(" Rs");
	}
	else if(o==2)
	{
		printf("\nYour Order is Cone");
		t=q*30;
		printf("\nTotal Price is :%d",t);
		printf(" Rs");

	}
	else if(o==3)
	{
		printf("\nYour Order is Pestries");
		t=q*50;
		printf("\nTotal Price is :%d",t);
		printf(" Rs");
	}
	else
	{
		printf("\nPlease Enter Valid No");
	}
	if(t>=500)
	{       d=t*10/100;
		printf("\nDiscount :%d",d);
		printf(" Rs");
		bill=t-d;
		printf("\nYou Have to Pay :%d",bill);
		printf("/-");
	}
	else
	{
		printf("\nNo Discount");
	}

	getch();
}