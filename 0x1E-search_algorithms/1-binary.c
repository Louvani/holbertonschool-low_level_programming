#include "search_algos.h"


int subroutine(int *array, int left, int rigth, int value);
void print_sub_array(int *array, int left, int rigth);

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: is a pointer to the first element of the array to search in
 * array will be sorted in ascending order
 * @size: is the number of elements in array
 * value won’t appear more than once in array
 * @value: is the value to search for
 * Return: the index where value is located
 * If value is not present in array or if array is NULL, return -1
 * print the array being searched every time it changes.
 * (e.g. at the beginning and when you search a subarray)
 */
int binary_search(int *array, size_t size, int value)
{
	int result;

	if (!array)
	{
		return (-1);
	}
	result = subroutine(array, 0, (int)size - 1, value);
	return (result);
}
/**
 * subroutine - recursion searches for a value
 * @array: is a pointer to the first element of the array to search in
 * array will be sorted in ascending order
 * @left: is the first number in array
 * @rigth: is the last number in array
 * @value: is the value to search for
 * Return: the index where value is located
 */
int subroutine(int *array, int left, int rigth, int value)
{
	int mid, aux;

	if (left > rigth)
	{
		return (-1);
	}
	mid = (left + rigth) / 2;
	aux = left;
	printf("Searching in array: ");
	while (aux <= rigth)
	{
		if (aux == rigth)
			printf("%d", array[aux]);
		else
			printf("%d, ", array[aux]);
		aux++;
	}
	printf("\n");

	if (array[mid] < value)
		return (subroutine(array, mid + 1, rigth, value));
	if (array[mid] > value)
		return (subroutine(array, left, mid - 1, value));
	if (array[mid] == value)
		return (mid);

	return (-1);
}
