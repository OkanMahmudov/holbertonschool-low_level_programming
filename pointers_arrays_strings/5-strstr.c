#include <stdio.h>
#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string
 */

void rev_string(char *s)
{
int c = 0;
int start = 0;
int end;
char temp;

while (s[c] != '\0')
{
c++;
}

end = c - 1;

while (start < end)
{
temp = s[start];
s[start] = s[end];
s[end] = temp;
start++;
end--;
}
}

