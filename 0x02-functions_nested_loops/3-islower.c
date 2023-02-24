#include "main.h"

/**
 * main - Checks whether a given character is lowercase
 * Parameters: alpha The character to check
 * Return: Returns  1 if the character is lowercase, 0 otherwise
 */

int _islower(int alpha) /*function implementation*/
{
	if (alpha >= 'a' && alpha <= 'z')
		return (1);
	else
		return (0);
}
