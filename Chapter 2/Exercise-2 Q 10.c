#include<stdio.h>

int main()
{
	float x1,y1,x2,y2,x3,y3,m,n;
	
	printf(" Enter the values of x1 and y1 ");
	scanf("%f %f", &x1,&y1);
	
	printf(" Enter the values of x2 and y2 ");
	scanf("%f %f", &x2,&y2);
	
	printf(" Enter the values of x3 and y3 ");
	scanf("%f %f", &x3,&y3);
	
	m = (y2 - y1) / (x2 - x1);
	
	n = (y3 - y2) / (x3 - x2);
	
	if( m == n)
		printf(" All three points lie on the same line ");
	else
		printf(" All three points do not lie on same line ");
		
	
	return 0;
}
