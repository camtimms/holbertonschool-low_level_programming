#ifndef VAR_H
#define VAR_H

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

/**
 * struct print_func- Structure that holds a function and a specifier character
 *
 * @c: Character
 * @f: Function
 *
 * Description: Structure that holds a function and a specifier character
 */

typedef struct print_func
{
	char c;
	void (*f)(va_list);
} print_func_t;

void print_char(va_list args);
void print_int(va_list args);
void print_float(va_list args);
void print_str(va_list args);
void print_all(const char * const format, ...);
void (*get_print_func_fp(char c))(va_list);

#endif
