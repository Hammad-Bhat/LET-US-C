#include<stdio.h>

int main()
{
	float tsp,tprof,cp;
	printf(" Enter the total selling price of 15 items ");
	scanf(" %f", &tsp);
	printf(" Enter the total profit earned on 15 items ");
	scanf(" %f", &tprof);
	cp = (tsp-tprof)/15;
	printf(" Cost price of 1 item is Rs %f ", cp);
	
	return 0;
	
}
