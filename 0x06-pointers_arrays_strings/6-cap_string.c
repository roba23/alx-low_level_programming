#include "main.h"
#include <string.h>
/**
 * cap_string - convert lower case characters to uppercase
 * @s: argument
 * Return: char
 */
char *cap_string(char *s)
{
		int i, j;
		char sep[] = " \t\n,;.!?\"(){}";

		i = 1;
		if (s[0] >= 'a' && s[0] <= 'z')
			s[0] -= 32;
		while (s[i] != '\0')
		{
		for (j = 0; sep[j] != '\0'; j++)
			if (s[i - 1] == sep[j] && (s[i] >= 'a' && s[i] <= 'z'))
				s[i] -= 32;
		i++;
		}
		return (s);
}
