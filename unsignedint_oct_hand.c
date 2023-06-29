#include "main.h"
/**
 * unsignedint_oct_hand - convert unsigned int decimal hand
 * @format_ptr: format pointer
 * @args: argu list
 * Return: 0
 */

int unsignedint_oct_hand(const char **format_ptr, va_list args)
{
	const char *format;
	int val, q;
	int counter = 0;
	char st[100];

	format = *format_ptr;
	val = va_arg(args, unsigned int);
	unint_base_str(val, 8, st);
	for (q = 0; st[q]; q++)
	{
		_putc(st[q]);
		counter++;
	}
	format++;
	return (counter);
}
