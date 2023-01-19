#ifndef HEADER_H
#define HEADER_H
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void for_char(va_list c);
void for_int(va_list i);
void for_float(va_list f);
void for_string(va_list s);

#endif
