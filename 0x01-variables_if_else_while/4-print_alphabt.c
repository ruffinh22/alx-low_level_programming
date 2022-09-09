#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print all aplhabet letters except q and e
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char y = 'a';
	while (y <= 'z')
	{
		if (y == 'e' || y == 'q')
			++y;
		putchar(y);
		++y;
	}
	putchar('\n');	
	return (0);
}
