#include <stdio.h>

int main(void)
{
    // Loop to print digits from 0 to 9
    for (int i = 0; i <= 9; i++)
    {
        putchar(i + '0'); // Convert integer to character and print it
    }
    
    // Print a newline after the numbers
    putchar('\n');

    return 0;
}
