#include<stdio.h>

int main()
{
	float time;
	printf(" Enter the time taken by the worker in hours ");
	scanf(" %f", &time );
	
	if( time >= 2 && time < 3)
		printf(" The worker is highly efficient. ");
	else if( time >= 3 && time < 4)
		printf(" The worker is ordered to improve speed. ");
	else if( time >= 4 && time < 5)
		printf(" The worker is given training to improve the speed. ");
	else
		printf(" The worker has to leave the company ");
		
	return 0;
}
