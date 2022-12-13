#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - displays the complete jack bour count down
 *
 * Return: does not return any value
 */
void jack_bauer(void)
{
	int a, b, c, d;

	for (a = 0; a <= 2; a++)
	{
		for (b = 0; b <= 3; b++)
		{
			for (c = 0; c <= 5; c++)
			{
				for (d = 0; d <= 9 ; d++)
				{

					printf("%d%d:%d%d\n", a, b, c, d);
				}

			}



		}



	}
}
