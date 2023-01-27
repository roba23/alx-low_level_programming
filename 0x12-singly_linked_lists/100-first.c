#include <stdio.h>
void __attribute__((constructor)) print();
void print(void);
/**
 * print - print a statment
 * Return:nothing
 */
void print(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
