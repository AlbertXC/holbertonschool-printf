#include "main.h"

/**
 * print_char - print a character given as an argument
 * @fmt: argument containing the character.
 *
 * Return: Nothing.
 */
void print_char(va_list fmt)
{
	int a;

	a = (va_arg(fmt, int));
	_putchar(a);
}

/**
 * print_str - print a string given as an argument
 * @fmt: argument containing the string
 *
 * Return: Nothing.
 */
void print_str(va_list fmt)
{
	char *b;

	b = (va_arg(fmt, char *));
	print_string(b);
}

/**
 * print_integer - print an integer given as an argument
 * @fmt: argument containing the integer
 *
 * Return: Nothing.
 */
void print_integer(va_list fmt)
{
	print_number(va_arg(fmt, int));
}

/**
 * print_number - print a number given in base 10.
 * @n: number given
 *
 * Return: Nothing
 */
void print_number(int n)
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
}

