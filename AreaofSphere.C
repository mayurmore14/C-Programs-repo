//program to calculate surface area and volume of sphere
#include<stdio.h>
#include<conio.h>
void main()
{
	int r;
	float sa=0,v=0;
	clrscr();

	printf("\nEnter the Radius of Sphere :");
	scanf("%d",&r);
	sa=4*3.14*r*r;
	printf("\nSurface Area of Sphere is :%f",sa);
	v=4/3*3.14*r*r*r;
	printf("\nVolume of Sphere is :%f",v);


	getch();


}