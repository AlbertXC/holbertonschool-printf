#include "main.h"

int _printf(const char *format, ...)
{
	func choice[] = {
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
		_putchar(format[i]);
		i++;
	}
	va_end(fmt);
	return(i);
}
