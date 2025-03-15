#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse.
 * @s: string to be printed in reverse.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')  /* Base case: end of the string */
		return;

	_print_rev_recursion(s + 1);  /* Recursively call with the next character */
	_putchar(*s);  /* Print the current character */
}
