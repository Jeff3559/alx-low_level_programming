#include "main.h"
#include <stdlib.h>
#include <stdio>

/**
 * main - prints the multiplication of two integers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if true, 1 if false
 */
int main(int argc, char *argv[])
{
	int y, x;

	if (argc == 3)
	{
		y = atoi(argv[1]);
		x = atoi(argv[2]);
		printf("%d\n", y *x);
		return (0);
	}
	printf("Error\n");
	return(1);
}
