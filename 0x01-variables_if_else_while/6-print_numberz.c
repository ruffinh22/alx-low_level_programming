#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print 0-9 using putchar
 *              while using int variable
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int a = 0;

	while (a <= 9)
	{
		/*convert digit to ASCII representation*/
		putchar(a + '0');
		++a;
	}
	putchar('\n');

	return (0);
}
