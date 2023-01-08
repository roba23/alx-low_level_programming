#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * cent - convert dollar to number of cents
 * @a - dollar bill
 * Return: number of cents
 */
int cent(char *a)
{
	int cent, count;

	cent = atoi(a);
	count = 0;
	if (cent <= 0)
		return (0);
	while (cent > 0)
	{
		if (cent / 25)
		{
			count++;
			cent = cent - 25;
		}
		else if (cent / 10)
		{
			count++;
			cent = cent - 10;
		}
		else if (cent / 5)
		{
			count++;
			cent = cent - 5;
		}
		else if (cent / 2)
		{
			count++;
			cent = cent - 2;
		}
		else if (cent / 1)
		{
			count++;
			cent = cent - 1;
		}
	}
	return (count);

}
/**
 * main - convert dollar to changes
 * @argc: number of arguments
 * @argv: arguments passed from command line
 * Return: return 0 if succesfull
 * 1 if it fails
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", cent(argv[1]));
	return (0);

}
