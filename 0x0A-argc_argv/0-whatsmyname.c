#include <stdio.h>
#include "main.h"

/**
 * main -> a function to print its  name
 * @argc: argc parameter
 * @argv: an  array of a command listed
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", *argv);
	return (0);
}
