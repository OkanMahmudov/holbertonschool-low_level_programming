#include <stdlib.h>

/**
 * _strdup - creates a duplicate of a string.
 * @str: the string to be duplicated.
 *
 * Return: pointer to the duplicated string, or NULL if memory allocation fails
 * or str is NULL.
 */
char *_strdup(char *str)
{
	char *dup;
	int i, len;

	if (str == NULL)
		return (NULL);

	/* Find the length of the string */
	for (len = 0; str[len] != '\0'; len++)
		;

	/* Allocate memory for the duplicate string (including the null terminator) */
	dup = (char *)malloc((len + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL); /* If malloc fails, return NULL */

	/* Copy the string into the allocated memory */
	for (i = 0; i < len; i++)
	{
		dup[i] = str[i];
	}

	/* Null-terminate the duplicated string */
	dup[len] = '\0';

	return (dup);
}
