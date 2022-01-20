// Two numbers numbers are input through the keyboard into two location C and D. Write a program to interchange the contents of C and D//

#include<stdio.h>

int main()
{
	int a,b,c,d;
	printf(" Enter the two numbers ");
	scanf("%d %d", &a,&b);
	c=b;
	d=a;
	printf(" The interchanged content is %d %d ",c,d);
	
	return 0;
	
}
