#include <stdio.h>

/**
 * main - program that prints all single digit numbers
 * return: Always 0 (success)
 */

int main(void)

{
	int x;

	for (x = '0'; x <= '9'; x++)
		putchar(x);
	putchar('\n');
	return (0);
}
