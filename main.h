#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <unistd.h>

int _printf(const char *format, ...);
int format_hand(const char **format_ptr, va_list args);
int chara_hand(const char **format_ptr, va_list args);
int _putc(char c);
int str_hand(const char **format_ptr, va_list args);
int perc_hand(void);
void int_base_str(int num, int base, char str[]);
int deci_hand(const char **format, va_list args);
int int_hand(const char **format_ptr, va_list args);
int unsignedint_bin_hand(const char **format_ptr, va_list args);
void unint_base_str(unsigned int num, int base, char str[]);
int unsignedint_dec_hand(const char **format_ptr, va_list args);
int unsignedint_oct_hand(const char **format_ptr, va_list args);
int unsignedint_hex_hand(const char **format_ptr, va_list args);
int unsignedint_hex_hand_upp(const char **format_ptr, va_list args);
int addr_hand(const char **format_ptr, va_list args);
int str_len(const char *f);



#endif
