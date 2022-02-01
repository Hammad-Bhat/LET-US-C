#include<stdio.h>

int main()
{
	float cp,sp,prf,loss;
	printf(" Enter the cost price and selling price of an item ");
	scanf(" %f %f",&cp,&sp);
	
	// Profit = selling price - cost price //
	prf = sp - cp;
	// Loss = cost price - selling price //
	loss = cp - sp;
	
	if(prf > 0)
		printf(" The profit is Rs %f", prf);
	else if( loss > 0)
		printf(" The loss is Rs %f", loss);
	else if( prf == 0)
		printf(" No profit, No loss ");
	
	
	return 0;
	
}
