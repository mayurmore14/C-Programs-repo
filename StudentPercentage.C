//program to Calculate Students Percentage
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d,e,t=0;
	float per=0;
	clrscr();
	printf("\nEnter First sub Marks :");
	scanf("%d",&a);
	printf("\nEnter Second Sub Marks :");
	scanf("%d",&b);
	printf("\nEnter Third Sub Marks :");
	scanf("%d",&c);
	printf("\nEnter Fourth Sub Marks :");
	scanf("%d",&d);
	printf("\nEnter Fifth Subject Marks :");
	scanf("%d",&e);
	t=a+b+c+d+e;
	printf("\nTotal Marks :%d",t);
	per=t/5;
	printf("\nPercentege :%f",per);
	if(per>=85 && per<100)
	{
		printf("\nPass\nGrade :A+");
	}
	else if(per>=35 && per<50)
	{
		printf("\nPass\nGrade :B");
	}

	getch();
}