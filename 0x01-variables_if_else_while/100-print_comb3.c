#include <stdio.h>

/**
 * main - Entry point, prints all possible different combinations of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int tens, ones;

	for (tens = 0; tens <= 9; tens++)
	{
		for (ones = 0; ones <= 9; ones++)
		{
			if (tens != ones && tens < ones)
			{
				putchar((tens % 10) + '0');
				putchar((ones % 10) + '0');
				if (!(tens == 8 && ones == 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
