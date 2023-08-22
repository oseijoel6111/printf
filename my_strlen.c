#include "main.h"

/**
 * my_strlen - Returns the length of a string.
 * @s: Type char pointer
 * Return: c.
 */
int my_strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}

	return c;
}

