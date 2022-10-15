#include "main.h"

/**
 * _putchar - print a single character.
 * @c: character given.
 *
 * Return: character
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_string - print a given string.
 * @s: string given.
 *
 * Return: A string.
 */
void print_string(char *s)
{
	if (*s != 0)
	{
		_putchar(*s);
		print_string(s + 1);
	}
}

