#include "3-calc.h"
#include <string.h>
/**
 * main - calculadora
 * @argc: number of arguments
 * @argv: arguments
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if ((strcmp(argv[2], "/") == 0) || (strcmp(argv[2], "%") == 0))
	{
		if (num2 == 0)
		{
			printf("Error\n");
			exit(100);
		}
	}
	result = get_op_func(argv[2])(num1, num2);
	printf("%d\n", result);
	return (0);
}
