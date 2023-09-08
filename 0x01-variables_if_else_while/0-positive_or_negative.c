#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - is the main function
 *
 *Return: returns 0 ends program.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	printf("is positive");
	else if (n == 0)
	printf("is zero");
	else
	printf("is negative");
	return (0);
}
