#include "main.h"

/**
 * _putchar - print a single character.
 * @c: character given.
 *
 * Return: character
 */
int _putchar(char c)
{
	return(write(1,&c,1));
}

/**
 * print_string - print a given string.
 * @s: string given.
 *
 * Return: A string.
 */
int print_string(char *s)
{
	int i;

	if (*s != 0)
	{
		_putchar(*s);
		print_string(s + 1);
	}
	for (i = 0; s[i] != 0; )
		i++;
	return (i);
}

