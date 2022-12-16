#include <ctype.h>
#include <stdio.h>
int main(void)
{
	char m='D';
	int d=4;
	printf("%c is an alpha value of:%d\n", m, isalpha(m));
	printf("%d is an alpha value of:%d\n", d, isalpha(d));
	return (0);
}
