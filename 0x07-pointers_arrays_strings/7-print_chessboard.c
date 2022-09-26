#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - Print a chess board like output
 * @a: 2d array of X * X
 *
 * Return: void
 */


void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);
		if (i < 8)
			_putchar('\n');
	}
}
