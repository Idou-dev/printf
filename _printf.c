#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: format type
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list p;
	int i = 0, n = 0;
	char *s;

	if (!format)
		return (-1);
	va_start(p, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case '\0':
					break;
				case 'c':
					_putchar(va_arg(p, int));
					n++;
					break;
				case 's':
					s = va_arg(p, char *);
					write(1, s, _strlen(s));
					n += _strlen(s);
					break;
				case '%':
					_putchar('%');
					n++;
					break;
				default :
					_putchar(format[i]);
					break;
			}
		}
		else
		{
			_putchar(format[i]);
			n++;
		}
		i++;
	}
	va_end(p);
	return (n);
}
