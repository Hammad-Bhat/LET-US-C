#include<stdio.h>

int main()
{
	char hlth,cty,gndr;
	int age;
	
	printf(" Enter health e for Excellent and p for Poor ");
	scanf(" %c", &hlth);
	
	printf(" Enter c for City and v for Village ");
	scanf(" %c", &cty);
	
	printf(" Enter m for Male and f for Female ");
	scanf(" %c", &gndr);
	
	printf(" Enter the Age ");
	scanf(" %d", &age);
	
	if(hlth == 'e' && age >= 25 && age <= 35 && cty == 'c' && gndr == 'm')
		printf(" The premium is Rs. 4 per thousand and his policy amount cannot exceed Rs. 2 lakhs ");
	else if(hlth == 'e' && age >= 25 && age <= 35 && cty == 'c' && gndr == 'f')
		printf(" The premium is Rs. 3 per thousand and her policy amount cannot exceed Rs. 1 lakh ");
	else if(hlth == 'p' && age >= 25 && age <= 35 && cty == 'v' && gndr == 'm')
		printf(" The premium is Rs. 6 per thousand and his poiicy amount cannot exceed Rs. 10000 ");
	else
		printf(" The person is not insured ");
		
	return 0;		
					
}
