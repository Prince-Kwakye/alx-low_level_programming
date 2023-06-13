#include <stdlib.h>
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */


char *_strdup(char *str)
{
	char *ptStr;
	int i = 0, r = 0;

	while (str[i] != '\0')
		i++;
	if (str == NULL)
		return (NULL);
	ptStr = malloc(i * sizeof(char) (+1));
	if (ptStr == NULL)
		return (NULL);
	for (r = 0; str[r] != '\0'; r++)
		ptStr[r] = str[r];
		return (ptStr);
}
