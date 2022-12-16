#include "main.h"
/**
 * more_numbers - print numbers from 0 to 14
 * ten times followed by a new line
 * Return: void
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 14; j++)
		{
			_putchar(j + '00');
		}
	_putchar('\n');		
	}
}
