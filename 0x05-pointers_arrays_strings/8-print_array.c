#include <stdio.h>
#include "main.h"

/**
 * print_array - Prints n elements of an aray integers
 * @a: Array whose integers are to be printed
 * @n: Number of elements to print from the array.
 * Return: None
 *
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
