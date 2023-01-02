/**
 * _strspn - number of bytes in the initial segment of
 * `: s which consist only of bytes from accept
 * @s: the string we want to examine
 * @accept: string 2
 * Return: return number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int flag;

	i = 0;
	j = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		flag = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				flag = 1;
		}
		if (flag == 0)
			break;
	}
	return (i);
}
