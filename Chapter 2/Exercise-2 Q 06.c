#include<stdio.h>

int main()
{
	int Ram,Shyam,Ajay;
	printf(" Enter the age of Ram, Shyam and Ajay ");
	scanf("%d %d %d", &Ram,&Shyam,&Ajay);
	
	if( Ram < Shyam && Ram < Ajay)
		printf(" Ram is youngest ");
	else if (Shyam < Ram && Shyam < Ajay)
		printf(" Shyam is youngest ");
	else
		printf(" Ajay is youngest ");
	
	return 0;
}
