#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *positive_or_negative - is the main function
 *
 *Return: returns 0 ends program.
 */
int positive_or_negative(void)
{
        int n = 0;

        /*srand(time(0));
	  n = rand() - RAND_MAX / 2;*/
        /* your code goes there */
        if (n > 0)
        printf("%d is positive\n", n);
        else if (n == 0)
        printf("%d is zero\n", n);
        else
        printf("%d is negative\n", n);
        return (0);
}
