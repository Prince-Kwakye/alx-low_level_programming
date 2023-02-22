#include <stdio.h>
/**
 * main - Print lowercase and uppercase alphabet
 * Return: Always 0 (success)
 */

int main(void)
{
        char lower, upper;
	for (lower = 'a'; lower <= 'z'; lower++)
        putchar(lower);
        for (upper = 'A'; upper <= 'Z'; upper++)
        putchar(upper);
        putchar('\n');
        return (0);
}
