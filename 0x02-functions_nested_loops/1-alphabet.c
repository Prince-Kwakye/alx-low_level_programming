#include "main.h"

/**
 * main - how to print lowercase alphabet using putchar
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
		_putchar(lower);
	_putchar('\n');
}
