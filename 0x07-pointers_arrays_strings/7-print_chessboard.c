#include "main.h"

/**
 * priint_chessboard -> print a chessboard
 * @a: the chessboard to be printed.
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
