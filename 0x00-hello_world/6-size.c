#include <stdio.h>
/**
 * main-this is description of main
 * Return:returns o if sucessful
 *
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;
	printf("Size of a char%lu:", (unsigned long)sizeof(a));
	printf("Size of an int%lu:", (unsigned long)sizeof(b));
	printf("Size of a long int%lu:", (unsigned long)sizeof(c));
	printf("Size of a long long int%lu:", (unsigned long)sizeof(d));
	printf("Size of a float%lu:", Sizeof(e));
}
