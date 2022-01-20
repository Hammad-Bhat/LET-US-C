// Program to calculate gross salary of Ramesh //

#include<stdio.h>

int main()
{
	float basa,dra,hora,grs;
	
	printf(" Enter the basic salary of Ramesh ");
	scanf("%f", &basa);
	
	dra= basa*40/100;
	printf(" The dearness allowance of Ramesh is Rs %f\n", dra);
	hora= basa*20/100;
	printf(" The house rent allowace of Ramesh is Rs %f\n", hora);
	grs= basa-(dra+hora);
	printf(" The gross salary of Ramesh is Rs %f\n", grs);
	
	return 0;
	
}



