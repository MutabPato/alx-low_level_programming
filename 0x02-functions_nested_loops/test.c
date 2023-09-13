#include "main.h"

/**
 * times_table - prints the multiplication table from 0 to 9
 */
void times_table(void)
{
    int a, b, r;

    for (b = 0; b <= 9; b++)
    {
        for (a = 0; a <= 9; a++)
        {
            r = a * b;
            if (a != 0)
            {
                _putchar(',');
                _putchar(' ');
            }
            if (r < 10 && a != 0)
            {
                _putchar(' ');
            }
            if (r >= 10)
            {
                _putchar(r / 10 + '0');
            }
            else if (a != 0)
            {
                _putchar(' ');
            }
            _putchar(r % 10 + '0');
        }
        _putchar('\n');
    }
}
