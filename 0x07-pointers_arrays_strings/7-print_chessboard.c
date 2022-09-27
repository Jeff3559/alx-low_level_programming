#include "main.h"

/**
 * print_chessboard -> print a chessboard
 * @a: the chessboard to be printed.
 * Return: Always NULL
 */
void print_chessboard(char (*a)[8])
{
	int y, x;

	for (y = 0; a[y][7]; y++)
	{
		for (x = 0; x < 8; x++)
			_putchar(a[y][x]);
		_putchar('\n');
	}
}
