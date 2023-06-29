#include "main.h"

/**
 * _printf - main function
 * @format: argument
 * Return: 0
 */

int _printf(const char *format, ...)
{
	va_list args;
	int counter = 0;

	va_start(args, format);
	if (format == NULL)
		return (-1);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			counter += format_hand(&format, args);
			if (*format == '\0')
			{
				return (-1);
			}
		}
		else
		{
			counter += _putc(*format);
		}
		format++;
	}
	va_end(args);
	return (counter);
}
