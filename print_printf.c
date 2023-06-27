#include <stdio.h>
#include <stdarg.h>
/**
 * print_printf -  function that handles a specifier
 * @format: first
 * Return: an int
 */
int _printf(const char *format, ...)
{
	int x = 0;
	va_list list;

	va_start(list, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'd':
				case 'i':
					x += fprintf(stdout, "%d", va_arg(list, int));
					break;
				case 'c':
					x += putchar(va_arg(list, int));
					break;
				default:
					x += putchar('%');
					x += putchar(*format);
					break;
			}
		}
		else
		{
			x += putchar(*format);
		}
		format++;
	}
	va_end(list);
	return (x);
}
