#include<stdio.h>
#include<conio.h>
void main()
{
	int ch,n1,n2;
	float a;
	clrscr();
	printf("\n***MENU***");
	printf("\n 1. Area of Square :");
	printf("\n 2. Area of Rectangle :");
	printf("\n 3. Area of Circle :");
	printf("\n 4. Area of Triangle :");
	printf("\nEnter Your Choice :");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("\nEnter Length of Side :");
			scanf("%d",&n1);
			a=n1*n1;
			printf("\nArea of Square is = %f",a);
		break;
		case 2:
			printf("\nEnter Width :");
			scanf("%d",&n1);
			printf("\nEnter Height :");
			scanf("%d",&n2);
			a = n1*n2;
			printf("\nArea of Rectangle is = %f",a);
		break;
		case 3:
			printf("\nEnter Radius :");
			scanf("%d",&n1);
			a = 3.14*r*r;
			printf("\nArea of Circle is = %f",a);
		break;
		case 4:
				printf("\nEnter Height :");
				scanf("%d",&n1);
				printf("\nEnter Base :");
				scanf("%d",&n2);
				a=0.5*n1*n2;
				printf("Area of Rectangle is = %f",a);

	 }


	getch();

}