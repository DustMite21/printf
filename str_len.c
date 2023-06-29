#include "main.h"
/**
 * str_len - comput len of str
 * @f: string
 * Return: 0
 */
int str_len(const char *f)
{
	int e;
	int count = 0;

	for (e = 0; f[e] != '\0'; e++)
	{
		count++;
	}
	return (count);
}
