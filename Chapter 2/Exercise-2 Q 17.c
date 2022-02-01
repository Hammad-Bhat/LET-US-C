#include<stdio.h>

int main()
{
	int side1,side2,side3;
	
	printf(" Enter the three sides of triangle ");
	scanf(" %d %d %d", &side1,&side2,&side3);
	
	if( side1 == side2 && side1 != side3 || side2 == side3 && side2 != side1 || side3 == side1 && side3 != side2 )
		printf(" Isosceles Triangle ");
	else if( side1 == side2 && side2 == side3 && side3 == side1 )
		printf(" Equilateral Triangle ");
	else if( side1 * side1 == side2 * side2 + side3 * side3 ||  side2 * side2 == side3 * side3 + side1 * side1 ||  side3 * side3 == side1 * side1 + side2 * side2)
		printf(" Right angled Triangle ");
	else
		printf(" Scalene ");
		
	return 0;
	
}
