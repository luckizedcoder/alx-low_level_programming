#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
    int ones, tens, hundreds;

    for (hundreds = '0'; hundreds <= '9'; hundreds++)
    {
        for (tens = '0'; tens <= '9'; tens++)
        {
            for (ones = '0'; ones <= '9'; ones++)
            {
                if (!(ones == tens || tens == hundreds || tens > ones || hundreds > tens))
                {
                    putchar(hundreds);
                    putchar(tens);
                    putchar(ones);

                    if (!(ones == '9' && hundreds == '9' && tens == '8'))
                    {
                        putchar(',');
                        putchar(' ');
                    }
                }
            }
        }
    }
    putchar('\n');

    return (0);
}
