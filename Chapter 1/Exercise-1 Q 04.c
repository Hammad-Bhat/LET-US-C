// Write a program to convert fahrenheit degrees to celsius degrees//

#include<stdio.h>

int main()
{
	float fah,cel;
	
	printf(" Enter the temperature of city in fahrenheits ");
	scanf("%f", &fah);
	
	cel = (fah-32)/1.8;
	printf(" The temperature of city in celsius degrees is %f ", cel);
	
	return 0;
}
