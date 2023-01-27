#include <stdio.h>
void __attribute__((constructor)) print(); 
void print();
/**
 * print - print a statment
 * Return:nothing
 */
void print()
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
