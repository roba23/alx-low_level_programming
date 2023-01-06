#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the name of program
 * @argc: count arguments passed to a main function
 * @argv: an array containing values of the arguments
 * Return: return 0 if succesfull
 */
int main(int argc, char *argv[])
{

	if (argc < 3)
		printf("Error\n");
	else
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}

