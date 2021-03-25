#ifndef HOLB_H
#define HOLB_H

/*Libraries*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*Main Prototypes*/
int _putchar(char c);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);

/*Aux prototypes*/
int check_binary(const char *b);
int _strlen(const char *s);
int exponential(int a, int b);

#endif
