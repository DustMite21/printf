#include "main.h"

/**
 * print_flags - function that calculates active flags
 *@format: Formatted string in which to print the arguments
 *@i: take a parameter.
 *Return: Flags:
 */
int print_flags(const char *format, int *i)
{
/*- + 0 # ' '*/
/*1 2 4 8 16*/
int k, curr_b;
int flags = 0;
const char FLAGS_CH[] = {'-', '+', '0', '#', ' ', '\0'};
const int FLAGS_ARR[] = {F_MINUS, F_PLUS, F_ZERO, F_HASH, F_SPACE, 0};

for (curr_b = *i + 1; format[curr_b] != '\0'; curr_b++)
{
for (k = 0; FLAGS_CH[k] != '\0'; k++)
if (format[curr_b] == FLAGS_CH[k])
{
flags |= FLAGS_ARR[k];
break;
}
if (FLAGS_CH[k] == 0)
break;
}
*i = curr_b - 1;
return (flags);
}
