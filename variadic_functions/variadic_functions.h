#ifndef VAR
#define VAR
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct om
{
	char op;
	void (*take)(va_list *);
} om_t;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
char *strings(char *s);


void om_char(va_list args*);
void om_int(va_list args*);
void om_float(va_list args*);
void om_string(va_list args*);
#endif
