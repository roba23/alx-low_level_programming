#include <stdio.h>
void __attribute__((constructor)) print();
int print(void);
/**
 * print - print a statment
 * Return:nothing
 */
int print(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
	return (0);
}
