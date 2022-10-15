#include "main.h"

/**
 * _printf - print multiples arguments pass through the function
 * @format: arguments pass
 *
 * Return: the ammount of character printed
 */
int _printf(const char *format, ...)
{
	function choice[] = {
		{"c", print_char},
		{"s", print_str},
		{"i", print_integer},
		{"d", print_integer},
	};

	va_list fmt;
	int i = 0;
	int x = 0;

	va_start(fmt, format);

	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			while (x < 4)
			{
				if (format[i] == *choice[x].print)
				{
					choice[x].f(fmt);
				}
				x++;
				}
			x = 0;
			i++;
		}
		else if (format[i] == '%' && format[i + 1] == '%')
		{
			_putchar('%');
			i++;
		}
		if (!format[i])
			return (1);
		_putchar(format[i]);
		i++;
	}
	va_end(fmt);
	return (i);
}
