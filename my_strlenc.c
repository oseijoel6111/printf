/**
 * my_strlenc - Strlen function but applied for constant char pointer s
 * @s: Type char pointer
 * Return: c
 */
int my_strlenc(const char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
		;
	return (c);
}
