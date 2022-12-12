#include <stdio.h>
/**
 * main-function to print alphabet
 * in lower case ommiting q and e
 *
 * Return:return 0 if sucessfull
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter == 'q' || letter == 'e')
		{
			continue;
		}
		putchar(letter);
	}
	printf("\n");
	return (0);
}
