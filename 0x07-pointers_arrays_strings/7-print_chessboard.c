#include "main.h"

/**
 * print_chessboard - A function to print the arrangements on the chessboard.
 * @a: The The row size.
 * Return: No return.
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}

		_putchar('\n');
	}
}
