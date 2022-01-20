// Write a program to calculate the area amd perimeter of the rectangle and the area and circumference of ciocle //

#include<stdio.h>

int main()
{
	// For rectangle //
	float l,b,ar,peri;
	printf(" Enter the length and breadth of rectangle ");
	scanf("%f %f", &l,&b);
	ar = l*b;
	printf(" The area of rectangle is %f \n", ar);
	peri = 2*(l*b);
	printf(" The perimeter of rectangle is %f \n", peri);
	
	// For circle //
	float r,arc,cir;
	printf(" Enter the radius of circle \n");
	scanf(" %f", &r);
	arc = 3.14*r*r;
	printf(" The area of circle is %f \n", arc);
	cir = 2*3.14*r;
	printf(" The circumference of circle is %f ", cir);
	
	return 0; 
	
}
