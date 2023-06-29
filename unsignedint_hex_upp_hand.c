#include "main.h"
#include <stdint.h>
/**
 * unsignedint_hex_hand_upp - convert unsigned int decimal hand
 * @format_ptr: format pointer
 * @args: argu list
 * Return: 0
 */

int unsignedint_hex_hand_upp(const char **format_ptr, va_list args)
{
	const char *format;
	uintmax_t val;
	int q;
	int counter = 0;
	char str[100];
	char hex_digits[] = "0123456789ABCDEF";

	format = *format_ptr;
	switch (format[-1])
	{
		case 'l':
		case 'z':
			val = va_arg(args, uint64_t);
			break;
		default:
			val = va_arg(args, unsigned int);
			break;
	}
	for (q = 0; val > 0; q++)
	{
		str[q] = hex_digits[val % 16];
		val /= 16;
	}
	for (q--; q >= 0; q--)
	{
		_putc(str[q]);
		counter++;
	}
	*format_ptr = format;
	return (counter);
}
