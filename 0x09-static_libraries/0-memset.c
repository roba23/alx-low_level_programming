/**
 * char *_memset - set a memory area of n bytes
 * @s: the pointer containing the meory space
 * @b: the constant to bes set on the memory space
 * @n: number of bytes
 * Return: pointer to the memory space
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}

