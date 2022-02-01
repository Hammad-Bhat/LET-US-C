#include<stdio.h>

int main()
{
	char chr;
	printf(" Enter a character. ");
	scanf("%c", &chr);
	
	if(chr >= 65 && chr <= 90 )
		printf(" The character is a capital letter. ");
	else if( chr >= 97 && chr <= 122)
		printf(" The character is a small case letter. ");
	else if(chr >= 48 && chr <= 57 )
		printf(" The character is a digit. ");
	else
		printf(" Special symbol. ");
	
	return 0;
}

