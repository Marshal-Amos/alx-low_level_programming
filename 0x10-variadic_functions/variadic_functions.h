#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);

int print_c(va_list ap);

int print_i(va_list ap);

int print_f(va_list ap);

int print_s(va_list ap);

/**
 * struct op - a structure type
 *
 * @op: character in the structure
 * @f: functions in the structure
 */
typedef struct op
{
	char *c;
	int (*f)(va_list ap);
} print_func;

#endif
