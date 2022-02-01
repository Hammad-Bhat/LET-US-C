#include<stdio.h>

int main()
{
	int side1,side2,side3;
	printf(" Enter the sides of the triangle ");
	scanf("%d %d %d", &side1,&side2,&side3);
	
	// Sum of angles = 180 //
	
	if( side1 + side2 + side3 == 180)
		printf(" Triangle is valid ");
	else
		printf(" Triangle is not valid ");
	
	return 0;
}
