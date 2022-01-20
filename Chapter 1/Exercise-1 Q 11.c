#include<stdio.h>

int main()
{
	int cash,ten,fifty,hundred;
	printf(" Enter the cash to be withdrawn in hundreds ");
	scanf("%d", &cash);
	// For ten rupee notes//
	ten = cash/10;
	printf(" %d ten rupees notes or \n", ten);
	// For fifty rupee notes//
	fifty = cash/50;
	printf(" %d fifty rupees notes or \n", fifty);
	// For hundred rupee notes//
	hundred = cash/100;
	printf(" %d hundred rupees notes \n", hundred);
	
	return 0;
}


