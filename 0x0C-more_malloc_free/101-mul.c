#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
  * _isdigit - tells if the string consists of digits
  * @argv: pointer to current item in argument
  * Return: return 0 if all digits, 1 if not all digits.
  */
int _isdigit(char *argv)
{
	int i;

	i = 0;
	while (argv[i])
	{
		if (argv[i] >= '0' && argv[i] <= '9')
			i++;
		else
			return (1);
	}
	return (0);
}
/**
  * _atoi - converts a string of ascii digits to the values they represent
  * @max: maximum range
  * @min: min number
  * @op1: operand 1
  * @op2: operand 2
  * @num1: the first operand
  * @num2: the second operand
  * Return: value of digits
  */
void _atoi(int max, int min, char *op1, char *op2, char *num1, char *num2)
{
	int i = 0;

	for (i = max; i >= 0; i--)
	{
		if (i >= (max - min))
		{
			num1[i] = op1[i];
			num2[i] = op2[i - (max - min)];
		}
		else
		{
			num1[i] = op1[i];
			num2[i] = '0';
		}
	}

}
/**
 * multiply - multiply two numbers and print out the result
 * @m: operand 1
 * @n: operand 2
 * @result: the result array
 * @max: the length of the string
 * Return: Nothing
 */
void multiply(char *m, char *n, char *result, int max)
{
	int i, j;
	int carry;
	int res;

	i = res = 0;
	carry = 0;
	for (i = max; i >= 0; i--)
	{
		for (j = max; j >= 0; j--)
		{
			printf("%c %c\n", m[i], n[i]);
			res += (((m[j] - '0') * (n[i] - '0')) + carry);
			carry = res / 10;
			printf("i:%d res:%d carry:%d\n", i, res, carry);
			result[i] = res / 10;
		}
	}
}
/**
  * main - main function call
  * @argc: argument count
  * @argv: 2D array of arguments
  * Return: return 0 on success, 98 on failure
  */
int main(int argc, char *argv[])
{
	int i, lenm, lenn, max;
	char m[1024], n[1024], result[1024];

	lenm = strlen(argv[1]);
	lenn = strlen(argv[2]);
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 1; i < argc; i++)
	{
		if (_isdigit(argv[i]))
		{
			printf("Error\n");
			exit(98);
		}
	}
	if (lenm > lenn)
	{
		max = lenm - 1;
		_atoi(lenm - 1, lenn - 1, argv[1], argv[2], m, n);
	}
	else if (lenm < lenn)
	{
		max = lenn - 1;
		_atoi(lenn - 1, lenm - 1, argv[2], argv[1], m, n);
	}
	else
	{
		max = lenn - 1;
		_atoi(lenm - 1, lenn - 1, argv[1], argv[2], m, n);
	}
	for (i = max; i >= 0; i--)
	{
		result[i] = ((m[i] - '0') * (n[i] - '0')) + '0';
	}
	result[max + 1] = '\0';
	printf("%s\n", result);
	return (0);
}
