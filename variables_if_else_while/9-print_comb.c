#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	/* Печать чисел от 0 до 8 с разделителями */
	for (i = 0; i < 9; i++)
	{
		putchar(i + '0');  /* Печатаем число i как символ */
		putchar(',');      /* Печатаем запятую */
		putchar(' ');      /* Печатаем пробел */
	}

	putchar(9 + '0');  /* Печатаем последнее число 9 */
	putchar('\n');     /* Печатаем новую строку */

	return (0);
}
