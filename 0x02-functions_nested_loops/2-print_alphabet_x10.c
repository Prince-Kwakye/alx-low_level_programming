#include "main.h"
/**
 * main - Print alphabet 10x
 * Return: Always 0 (success)
 */

void print_alphabet_x10(void)
{
	char lower;
	int number;

	number = 0;

	while (number < 10)
	{
		lower = 'a';
		while (lower <= 'z')
		{
			_putchar(lower);
			lower++;
		}
			_putchar('\n');
			number++;
	}
}
