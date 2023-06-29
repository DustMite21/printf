#include "main.h"
/**
 * unint_base_str - converts int to str
 * @num: num to be converted
 * @base: base of num
 * @str: buffer container
 * Return: 0
 */
void unint_base_str(unsigned int num, int base, char str[])
{
	int i = 0;
	int j;
	int digit;
	char temp;

	do {
		digit = num % base;
		if (digit < 10)
			str[i++] = digit + '0';
		else
			str[i++] = digit - 10 + 'a';
		} while ((num /= base) > 0);
		str[i] = '\0';
		for (j = 0; j < i / 2; j++)
		{
			temp = str[j];
			str[j] = str[i - j - 1];
			str[i - j - 1] = temp;
		}
}
