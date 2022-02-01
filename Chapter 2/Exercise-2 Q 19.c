#include<stdio.h>

int main()
{
	float marksA,marksB,perA,perB;
	printf(" Enter the marks in Subject A and Subject B ");
	scanf(" %f %f", &marksA,&marksB);
	
	
	 
	perA = marksA / 100 * 100;
	perB = marksB / 100 * 100; 
	
	if(perA > 55 && perB > 45)
		printf(" Qualified ");
	else if( perA > 45 && perA < 55 && perB >=55)
		printf(" Qualified ");
	else if(perB < 45 && perA > 65)
		printf(" Allowed in the reappear examination of B");
	else
		printf(" Fail ");
		
	return 0;
		
}
