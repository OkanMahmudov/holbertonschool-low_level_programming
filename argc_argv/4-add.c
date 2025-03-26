#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - adds positive numbers
* @argc: number of arguments
* @argv: array of arguments
* Return: 0 on success, 1 on error
*/
int main(int argc, char *argv[])
{
	int sum = 0;

	int i, j;

	/* If no arguments, print 0 and return */
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	/* Loop through all arguments */
	for (i = 1; i < argc; i++)
	{
		/* Check if the argument contains only digits */
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		/* Add the number to sum */
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
