#include "main.h"
/**
 * more_numbers - print numbers from 0 to 14
 * ten times followed by a new line
 * Return: void
 */
void print_long(int value) 
{

	if(value != 0) 
	{
		print_long(value/10);
	        _putchar((value%10) + '0');
	}			   
}
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			print_long(j);
		}
	_putchar('\n');		
	}
}
