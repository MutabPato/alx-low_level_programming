#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - is the main function
 *
 *Return::returns 0 ends program
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n % 10 > 5)
	  printf("Last digit of %d is %d and is greater than 5", n, n % 10);
	else if (n % 10 == 0)
	  printf("Last digit of %d is %d and is 0", n, n % 10);
	else if (n % 10 < 6 && n % 10 != 0)
	  printf("Last digit of %d is %d and is greater than 5", n, n % 10);
	return (0);
}
