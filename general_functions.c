#include "main.h"

/**
 * print_char - print a character given as an argument
 * @fmt: argument containing the character.
 *
 * Return: Nothing.
 */
int print_char(va_list fmt)
{
	int a;

	a = (va_arg(fmt, int));
	_putchar(a);
	return (1);
}

/**
 * print_str - print a string given as an argument
 * @fmt: argument containing the string
 *
 * Return: Nothing.
 */
int print_str(va_list fmt)
{
	int i;
	char *b;
	
	b = (va_arg(fmt, char *));
	for (i = 0; b[i] != 0; i++)
		_putchar(b[i]);
	return (i);
}

/**
 * print_integer - print an integer given as an argument
 * @fmt: argument containing the integer
 *
 * Return: Nothing.
 */
int print_integer(va_list fmt)
{
	int digit;
	digit = print_number(va_arg(fmt, int));
		return (digit);
}

/**
 * print_number - print a number given in base 10.
 * @n: number given
 *
 * Return: Nothing
 */
int print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
		num = n;

	if ((num / 10) != 0)
		print_number(num / 10);
	_putchar((num % 10) + 48);
	return (num);
}



