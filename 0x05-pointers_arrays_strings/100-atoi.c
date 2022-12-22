#include "main.h"
#include <string.h>
/**
 * _atoi - converts a string to an integer.
 * @s: the string to convert
 * Return: the converted string.
 */
int _atoi(char *s)
{
	int i, j, size;
	int sign = 1;
	int n = 0;
	int flag;

	i = j = 0;
	size = strlen(s);
	flag = 0;
	for (i = 0; i < size; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			flag = 1;
			n *= 10;
			n  += (s[i]-'0');
		}
	
		else if (s[i] == '-' && flag ==0)
		{
			sign = -1;
			
		}
		else if (s[i] == ' ' && flag == 1)
		{
			break;
		}

	}
	n *= sign;
	return (n);

	
}
