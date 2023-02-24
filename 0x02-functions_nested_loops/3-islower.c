#include "main.h"

/**
 * main - Checks whether a given character is lowercase
 * Return: Returns  1 if the character is lowercase, 0 otherwise
 */

int _islower(int alpha)
{
	if (alpha >= 'a' && alpha <= 'z')
		return (1);
	else
		return (0);
}
