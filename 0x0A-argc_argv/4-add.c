#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - print the name of program
 * @argc: count arguments passed to a main function
 * @argv: an array containing values of the arguments
 * Return: return 0 if succesfull
 */
int main(int argc, char *argv[])
{
	int i, sum;
	if (argc < 2)
	{
		printf("0\n");
		return (0);	
	}
	for (i = 1; i < argc; i++)
	{
		if (*argv[i] == '0')
			sum += 0;
		else if (atoi(argv[i]))
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

