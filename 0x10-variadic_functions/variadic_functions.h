#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * struct print_d - type def function
 * @c - 1st parameter
 * @f_pr: 2nd para
 *
 */
typedef struct print_d
{
	char *c;
	void (*f_pr)(va_list a);
} print_d;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
