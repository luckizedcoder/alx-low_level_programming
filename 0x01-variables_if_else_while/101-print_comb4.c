#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int hundreds, tens, ones;

	for (hundreds = '0'; hundreds <= '9'; hundreds++)
	{
		for (tens = hundreds + 1; tens <= '9'; tens++)
		{
			for (ones = tens + 1; ones <= '9'; ones++)
			{
				putchar(hundreds);
				putchar(tens);
				putchar(ones);

				if (!(hundreds == '7' && tens == '8' && ones == '9'))
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
