#include<stdio.h>
#include<conio.h>
void main()
{

	int a,b,c,d,e,total=0;
	float per;
	clrscr();
	printf("Enter marks for marathi =");
	scanf("%d",&a);
	printf("\nEnter marks for hindi =");
	scanf("%d",&b);
	printf("\nenter marks for english =");
	scanf("%d",&c);
	printf("\nEnter marsks for math =");
	scanf("%d",&d);
	printf("\nEnter marks for geography =");
	scanf("%d",&e);
	total=a+b+c+d+e;
	printf("\nMarks =%d",total);
	per=total/5;
	printf("\nPercentage =%f",per);
	if(per>=35)
	{
		printf("\nCongratulation you are pass");
	}
	else
	{
		printf("\nYou are fail");
	}
	getch();
}
