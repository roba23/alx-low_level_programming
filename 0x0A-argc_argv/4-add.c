#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
/**
 *main - adds all arguments together if they are digits.
 *@argc: argument count only accepts ints separated by spaces.
 *@argv: argument vector
 *Return: 0 on success, 1 on failure
 */
int main(int argc, char *argv[])
{
	int sum, i;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (*argv[i] == '0')
			sum += 0;
		if (atoi(argv[i]) && *argv[i] != '0')
			sum += atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
