#include <stdio.h>
#include <stdlib.h>
/**
 * main - print addition of arguments
 * @argc: count arguments passed to a main function
 * @argv: an array containing values of the arguments
 * Return: return 0 if succesfull
 */
int main(int argc, char *argv[])
{
	int i, sum;

	sum = 0;
	if (argc < 3)
	{
		printf("Error\n");
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]))
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (0);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
