#include "main.h"

/**
 * main - function that checks for lowercase character
 * Return: Always 0
 */

int _islower(int alpha)
{
	if (alpha >= 'a' && alpha <= 'z')
		return (1);
	else
		return (0);
}
