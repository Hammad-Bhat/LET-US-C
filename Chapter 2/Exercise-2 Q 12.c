#include<stdio.h>

int main ()
{
	float x,y;
	printf(" Enter the values of x and y ");
	scanf("%f %f", &x,&y);
	
	if(x > 0 && y == 0 || x < 0 && y == 0)
	printf(" Point lies on x axis ");
	else if (y > 0 && x == 0 || y < 0 && x == 0  )
	printf(" Point lies on y axis ");
	else if(x == 0 && y == 0)
	printf(" point lies on origin ");
	else
	printf(" Points are in quadrant ");
	
	return 0;
}
