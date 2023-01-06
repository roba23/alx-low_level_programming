#include <string.h>
/**
 * _strcmp - compare two strings
 * @s1:first string
 * @s2:second string
 * Return: return integer
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int result;

	i = 0;
	result = 0;
	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			result = (int)s1[i] - (int)s2[i];
			break;
		}

	}
	return (result);
}
