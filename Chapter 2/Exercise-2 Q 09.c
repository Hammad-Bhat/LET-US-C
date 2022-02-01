#include<stdio.h>

int main()
{
	float len,brdth,area,peri;
	printf(" Enter the length and breadth of the rectangle ");
	scanf("%f %f", &len,&brdth);
	
	area = len * brdth;
	peri = 2 * (len + brdth);
	
	if(area > peri)
		printf(" The area %f is greater than the perimeter %f", area,peri);
	else
		printf("The area %f is not greater than the perimeter %f", area,peri);
		
	return 0;	
	
}
