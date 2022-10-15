#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
int print_string(char *s);
int _putchar(char c);
int _printf(const char *format, ...);

/**
 * struct func_fmt - receive a string and a function pointer.
 * @print: string given
 * @f: function pointer
 */
struct func_fmt
{
char *print;
int (*f)(va_list n);
};

/**
 * function - typedef for func_fmt
 */
typedef struct func_fmt function;

int print_char(va_list n);
int print_str(va_list n);
int print_integer(va_list n);
int print_number(int n);
#endif

