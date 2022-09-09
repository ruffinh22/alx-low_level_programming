#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print alphabet in lowercase then in uppercase
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char x = 'a';
	char X = 'A';

	/*prints a - z*/
	while (x <= 'z')
	{
		putchar(x);
		++x;
	}

	/*print A - Z*/
	while (X <= 'Z')
	{
		putchar(X);
		++X;
	}
	putchar('\n');

	return (0);
}
