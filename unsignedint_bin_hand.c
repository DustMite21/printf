#include "main.h"
#include <stdint.h>
/**
 * unsignedint_bin_hand - handles unsigned in to binary
 * @format_ptr: format str
 * @args: args list
 * Return: 0
 */

int unsignedint_bin_hand(const char **format_ptr, va_list args)
{
	uintmax_t val;
	int q;
	int counter = 0;
	char st[100];
	const char *format;

	format = *format_ptr;
	switch (format[-1])
	{
		case 'b':
			val = va_arg(args, uint32_t);
			unint_base_str(val, 2, st);
			for (q = 0; st[q]; q++)
			{
				_putc(st[q]);
				counter++;
			}
			break;
		case 'l':
		case 'z':
			val = va_arg(args, uint64_t);
			unint_base_str(val, 2, st);
			for (q = 0; st[q]; q++)
			{
				_putc(st[q]);
				counter++;
			}
			break;
		default:
			val = va_arg(args, unsigned int);
			unint_base_str(val, 2, st);
			for (q = 0; st[q]; q++)
			{
				_putc(st[q]);
				counter++;
			}
			break;
	}
	format++;
	return (counter);
}
