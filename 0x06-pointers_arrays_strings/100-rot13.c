#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * rot13 - encrypt a message using rot13
 * Return: pointer to the encrypted message
 */
char *rot13(char *a)
{
	char *alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *key = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int len;
	char output[1024];
	char *p;
	int i, j, m;

	len = strlen(a);
	i = j = m = 0;
	for (i = 0; i < len; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (a[i] == alpha[j])
			{
				output[m] = key[j];
				m++;
				break;
			}
		}
	}
	output[m] = '\0';
	p = output;
	return (p);
}



