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
	int index0 = 0;
	int index1 = 0;
	int count = 0;

	va_start(fmt, format);

	while (format && format[index0])
	{
		if (format[index0] == '%' && format[index0 + 1] != '%')
		{
			i++;
			while (x < 4)
			{
				if (format[index0] == *choice[index1].print)
				{
					choice[index1].f(fmt);
				}
				x++;
				}
			x = 0;
			i++;
		}
		else if (format[i] == '%' && format[i + 1] == '%')
		{
			i++;
			_putchar('%');
			count++;
			i++;
		}
		if (!format[i])
			return (1);
		_putchar(array[d]);
		i++;
	}
	va_end(fmt);
	return ((i - count));
}
