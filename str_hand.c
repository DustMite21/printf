#include "main.h"
int str_len1(const char *f);
/**
 * str_hand - handles strings
 * @format_ptr: format ptr to forrmat
 * @args: args list
 * Return: 0
 */

int str_hand(const char **format_ptr, va_list args)
{
	const char *format;
	char *s;
	int counter = 0;

	format = *format_ptr;
	s = va_arg(args, char *);
	if (s == NULL)
	{
		s = "(null) ";
		counter += write(1, s, str_len1(s));
	}
	else
	{
		while (*s)
		{
			_putc(*s++);
			counter++;
		}
	}
	*format_ptr = format + 1;
	return (counter);
}

/**
 * str_len1 - comput len of str
 * @f: string
 * Return: 0
 */
int str_len1(const char *f)
{
	int e;
	int count = 0;

	for (e = 0; f[e] != '\0'; e++)
	{
		count++;
	}
	return (count);
}
