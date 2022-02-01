#include<stdio.h>

int main()
{
	float hrdness,crbcnt,tnslstr;
	
	printf(" Enter the Hardness, Carbon Content and Tensile strength of the steel ");
	scanf(" %f %f %f", &hrdness,&crbcnt,&tnslstr);
	
	if(hrdness > 50 && crbcnt < 0.7 && tnslstr > 5600 )
		printf(" The grade of steel is 10 ");
	else if(hrdness > 50 && crbcnt < 0.7)
		printf(" The grade of steel is 9 ");
	else if(crbcnt < 0.7 && tnslstr > 5600)
		printf(" The grade of steel is 8 ");
	else if(hrdness > 50 && tnslstr > 5600)	
		printf(" The grade of steel is 7 ");
	else if(hrdness > 50 || crbcnt < 0.7 || tnslstr > 5600)
		printf(" The grade of steel is 6 ");
	else
		printf(" The grade of steel is 5 ");
		
	return 0;	
	
}
