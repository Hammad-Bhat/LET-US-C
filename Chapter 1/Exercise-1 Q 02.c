// Write a program to convert and print distance(KM) in meters, feet,inches and centimeters //

#include<stdio.h>

int main()
{
	float dist,mtr,ft,in,cm;
	
	printf(" Enter the distance between two cities in KM ");
	scanf("%f", &dist);
	
	mtr = dist*1000;
	printf(" The distance in meters  is %f\n", mtr);
	ft = dist*1000*3.25;
	printf(" The distance in feet is %f\n", ft);
	in = dist*1000*3.25*12;
	printf(" The distance in inches is %f\n", in);
	cm = dist*1000*3.25*12*2.5;
	printf(" The distance in cm is %f\n", cm);
	
	return 0;
}

