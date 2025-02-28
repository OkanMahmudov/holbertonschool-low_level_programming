#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int n;

	srand(time(0)); /* initialize random number generator */
	n = rand() - RAND_MAX / 2; /* generate a random number and assign it to n */

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);

	return (0);
}
