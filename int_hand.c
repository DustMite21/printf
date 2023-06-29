#include "main.h"
/**
 * int_hand - entry of the function printf
 * @format_ptr: string containing the format
 * @args: args list
 * Return: 0
 */

int int_hand(const char **format_ptr, va_list args)
{
	const char *format;
	int val, q;
	int counter = 0;
	char st[100];

	format = *format_ptr;
	val = va_arg(args, int);
	int_base_str(val, 10, st);
	for (q = 0; st[q]; q++)
	{
		_putc(st[q]);
		counter++;
	}
	format++;
	return (counter);
}
