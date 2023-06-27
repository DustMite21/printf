#include "main.h"
#define HEXADEC_S "0123456789abcdef"
#define HEXADEC_B "0123456789ABCDEF"

/**
 * print_hex - print hex numbers
 * @n: number to be printed
 * @c: character to be tested
 * Return: num of characteristics
 */
int print_hex(unsigned int n, char c)
{
	int a;
	char *str = HEXADEC_S;

	if (c == 'X')
		str = HEXADEC_B;
	if (!(n / 0x10))
	{
		putchar(str[n % 0x10]);
		return (1);
	}
	a = 1 + print_hex(n / 0x10, c);
	putchar(str[n % 0x10]);
	return (a);
}
/**
 * print_pointhexa - print hex numbers
 * @ptr: pointer to be printed
 * Return: number of characteristics
 */
int print_pointhexa(void *ptr)
{
	int m, s = 0;
	unsigned long int p;
	char *str = HEXADEC_S;

	if (!ptr)
		return (-1);

	p = (unsigned long int)ptr;
	if (!(p / 16))
	{
		s += _printf("0x");
		putchar(str[p % 16]);
		return (s + 1);
	}
	m = 1 + print_pointhexa((void *)(p / 16));
	putchar(str[p % 16]);
	return (m + s);
}
/**
 * print_s - print string and non printable char
 * @c: string to be printed
 * Return: number of chars
 */

int print_s(char *c)
{
	int i = 0, s = 0;

	if (!c)
		return (_printf("(nil)"));

	for (; c[i]; i++)
	{
		if (c[i] < 32 || c[i] >= 127)
		{
			s += _printf("\\x");
			if (c[i] < 0x10)
			{
				putchar('0');
			}
			s += _printf("%X", c[i]);
		}
		else
		{
			putchar(c[i]);
		}
	}
	return (s + i);
}

/**
 * flags - flags
 * @c: charater of flag
 * @c1: char specifier
 * Return: char count
 */

int flags(char c, char c1)
{
	int i = -1;

	if (c == '+' && (c1 == 'd' || c1 == 'i'))
		i = _printf("%c", c);
	else if (c == ' ' && (c1 == 'd' || c1 == 'i'))
		i = _printf("%c", c);
	else if (c == '#' && c1 == 'o')
		i = _printf("%c", '0');
	else if (c == '#' && c1 == 'x')
		i = _printf("%s", "0x");
	else if (c == '#' && c1 == 'X')
		i = _printf("%s", "0X");
	return (i);
}

/**
 * rot13 - print Ceasar cipher
 * @c: string to be printed
 * Return: number of characters processed, or -1 if @c is NULL
 */
int rot13(char *c)
{
	char r;
	int i = 0;

	if (!c)
		return (-1);
	for (; c[i]; i++)
	{
		if (c[i] >= 'a' && c[i] <= 'z')
		{
			r = (((c[i] - 'a') + 13) % 26);
			_printf("%c", (r + 'a'));
		}
		else if (c[i] >= 'A' && c[i] <= 'Z')
		{
			r = (((c[i] - 'A') + 13) % 26);
			_printf("%c", (r + 'A'));
		}
		else
			_printf("%c", c[i]);
	}
	return (i);
}
