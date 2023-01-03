#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strstr - find a substrig in a string
 * @haystack: string
 * @needle: substring
 * Return: the adress of the substring in the string
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, len, count, len2;
	char *p;

	i = j = 0;
	p = NULL;
	len = strlen(haystack);
	len2 = strlen(needle);
	if (len2 == 0)
		return (p);
	for (i = 0; i < len;)
	{
		j = 0;
		count = 0;
		while (haystack[i] == needle[j])
		{
			if (j == 0)
				p = &haystack[i];
			count++;
			i++;
			j++;

		}
		if (count == len2)
		{
			return (p);
		}
		else
			++i;
	}
	return (p);
}

