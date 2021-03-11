#include "3-calc.h"
/**
 * op_add - sum two integers
 * @a: number 1
 * @b: number 2
 * Return: varaible with the result
 */
int op_add(int a, int b)
{
	int add;

	add = a + b;
	return (add);
}
/**
 * op_sub - diference of two integers
 * @a: number 1
 * @b: number 2
 * Return: varaible with the result
 */
int op_sub(int a, int b)
{
	int sub;

	sub = a - b;
	return (sub);
}
/**
 * op_mul - multiply two integers
 * @a: number 1
 * @b: number 2
 * Return: varaible with the result
 */
int op_mul(int a, int b)
{
	int mul;

	mul = a * b;
	return (mul);
}
/**
 * op_div - divide two integers
 * @a: number 1
 * @b: number 2
 * Return: varaible with the result
 */
int op_div(int a, int b)
{
	int div;

	div = a / b;
	return (div);
}
/**
 * op_mod - modul of two integers
 * @a: number 1
 * @b: number 2
 * Return: varaible with the result
 */
int op_mod(int a, int b)
{
	int mod;

	mod = a % b;
	return (mod);
}
