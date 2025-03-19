#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: the first string.
 * @s2: the second string.
 *
 * Return: pointer to the new string, or NULL if memory allocation fails.
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int i, j, len1 = 0, len2 = 0;

	/* If s1 is NULL, treat it as an empty string */
	if (s1 == NULL)
		s1 = "";

	/* If s2 is NULL, treat it as an empty string */
	if (s2 == NULL)
		s2 = "";

	/* Calculate the length of s1 */
	while (s1[len1] != '\0')
		len1++;

	/* Calculate the length of s2 */
	while (s2[len2] != '\0')
		len2++;

	/* Allocate memory for the concatenated string */
	concat_str = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (concat_str == NULL)
		return (NULL);  /* Return NULL if memory allocation fails */

	/* Copy s1 into concat_str */
	for (i = 0; i < len1; i++)
		concat_str[i] = s1[i];

	/* Copy s2 into concat_str after s1 */
	for (j = 0; j < len2; j++)
		concat_str[i + j] = s2[j];

	/* Null-terminate the concatenated string */
	concat_str[i + j] = '\0';

	return (concat_str);
}
