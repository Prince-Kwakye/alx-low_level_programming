#include <stdio.h>

/**
 * main - program that prints all single digit numbers
 * return: Always 0 (success)
 */

int main(void)

{
	int x;

	for (x = 0; x < 10; x++)
		printf("%d", x);
	printf("\n");
	return (0);
}
