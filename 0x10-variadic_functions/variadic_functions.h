#ifndef HOLB_H
#define HOLB_H
#include <stdio.h>
#include <stdlib.h>

/**
 * struct op - Struct op
 *
 * @frmt: The format
 * @f: The function associated
 */
typedef struct a
{
    char *str;
    void (*f)(va_list);
} fun;


int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /*HOLBERTON_H*/
