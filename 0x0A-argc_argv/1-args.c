#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc:Counter of arguments
 * @argv: arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
