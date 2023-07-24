#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

typedef struct
{
	char s;
	int (*func_p)(va_list ap);
} printhandler;


int _printf(const char *format, ...);
int print_a_char(char c);
int print_a_string(char *s);

#endif
