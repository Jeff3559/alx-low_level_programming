#include "main.h"

/**
 * print_alphabet - funtion to print lowercase alphabbet
 *
 * Return: 0
 */
void print_alphabet(void)
{
	int j;

	for (j = 'a'; j <= 'z'; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
}