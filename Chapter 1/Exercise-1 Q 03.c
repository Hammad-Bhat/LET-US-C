// Write a program to find the aggregate marks and percentage marks obtained by a student in five different subjects //

#include<stdio.h>

int main()
{
	float S1,S2,S3,S4,S5,sum,per,tmarks=500;
	
	printf(" Enter the marks in 5 subjects ");
	scanf("%f %f %f %f %f", &S1,&S2,&S3,&S4,&S5);
	sum = S1+S2+S3+S4+S5;
	printf(" Aggregate marks %f\n", sum);
	per = sum/tmarks*100;
	printf(" Percentage marks %f\n", per);
	
	return 0;
}
