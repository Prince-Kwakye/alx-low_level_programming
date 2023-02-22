#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 */

int main(void)

{
	int a;
	char c;

	for (a = '0'; a <= '9'; a++)
		putchar(a);
	for (c = 'a'; c <= 'g'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
