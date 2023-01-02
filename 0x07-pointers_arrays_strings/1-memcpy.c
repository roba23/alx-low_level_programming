/**
 * char *_memcpy - set a memory area of n bytes
 * @src: the pointer containing the adress of data to copied
 * @dest: the adress where the data is to be copied
 * @n: number of bytes
 * Return: pointer to the memory space
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}


