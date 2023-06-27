#ifndef HEADER_H
#define HEADER_H

int _putchar(char c);
int _printf(const char *format, ...);
int fmt_str(char *c);
int print_num(int n);
int print_bin(unsigned int b);
int print_oct(unsigned int o);
int print_dec(unsigned int u);
int print_hex(unsigned int n, char c);
int print_pointhexa(void *);
int print_s(char *s);
int _puts(char *s);
int flags(char c, char c1);
int rot13(char *);
int rev(char *);
#endif
