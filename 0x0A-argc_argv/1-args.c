#include <stdio.h>
/**
 * main - print the name of program
 * @argc: count arguments passed to a main function
 * @argv: an array containing values of the arguments
 * Return: return 0 if succesfull
 */
int main(int argc, __attribute__((unused))char *argv[])
{
	if (argc >= 1)
		printf("%d\n", (argc - 1));
	return (0);
}

