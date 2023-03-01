#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * rot13 - encrypt a message using rot13
 * @a: the string to be encrypted
 * Return: pointer to the encrypted message
 */
char *rot13(char *a)
{
	char *alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *key = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int len;
	char output[1024];
	char *p;
	int i, j;

	len = strlen(a);
	i = j = 0;
	for (i = 0; i < len; i++)
	{
		for (j = 0; j < 52; j++)
		{
			output[i] = a[i];
			if (a[i] == alpha[j])
			{
				output[i] = key[j];
				break;
			}

		}
	}
	output[i] = '\0';
	p = output;
	return (p);
}



