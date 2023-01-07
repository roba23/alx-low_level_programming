#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
/**
 * check - check if an argument pased from command line is digit or not
 * @a: string
 * Return: return 0 if it is digit and 1 if it is not
 */
int check(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (isdigit(a[i]) == 0)
			return (1);
	}
	return (0);
}
/**
 *main - adds all arguments together if they are digits.
 *@argc: argument count only accepts ints separated by spaces.
 *@argv: argument vector
 *Return: 0 on success, 1 on failure
 */
int main(int argc, char *argv[])
{
	int sum, i;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		if (check(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		else
			sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
