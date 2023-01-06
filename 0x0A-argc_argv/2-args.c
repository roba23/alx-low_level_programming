#include <stdio.h>
/**
 * main - print the name of program
 * @argc: count arguments passed to a main function
 * @argv: an array containing values of the arguments
 * Return: return 0 if succesfull
 */
int main(int argc, char *argv[])
{
	int i;

		for (i = 0; i < argc; i++)
			printf("%s\n", argv[i]);
	return (0);
}

