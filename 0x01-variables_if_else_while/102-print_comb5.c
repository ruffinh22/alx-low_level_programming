#include<stdio.h>

/**
 * main - Entry Point
 * Description: Write a program that prints all possible
 * different combinations of two digits firstd and secondd
 * Return: 0
 */

int main(void)
{
	int firstd = 0, secondd;

	while (firstd <= 99)
	{
		secondd = firstd;
		while (secondd <= 99)
		{
			if (secondd != firstd)
			{
				putchar((firstd / 10) + 48);
				putchar((firstd % 10) + 48);
				putchar(' ');
				putchar((secondd / 10) + 48);
				putchar((secondd % 10) + 48);

				if (firstd != 98 || secondd != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			++secondd;
		}
		++firstd;
	}
	putchar('\n');

	return (0);
}
