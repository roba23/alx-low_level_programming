#include <stdio.h>
/**
 * main - print the name of program
 * @argc: count arguments passed to a main function
 * @argv: an array containing values of the arguments
 * Return: return 0 if succesfull
 */
int main(int argc, char *argv[])
{
	if (argc >= 1)
		printf("%s\n", argv[0]);
	return (0);
}
