#include<stdio.h>
#include<conio.h>
void main()
{
	char gender;
	int age;
	clrscr();
	printf("\nEnter the Gender (f/m) :");
	scanf("%c",&gender);
	printf("\nEnter the Age :");
	scanf("%d",&age);
	if(gender=='m' && age>=18)
	{
		printf("\nDriving is Allowed for Male Driver");
	}
	else
	{
		printf("\nDriving is Not Allowed for Male Driver");
	}

	getch();

}