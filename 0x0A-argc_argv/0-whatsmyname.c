#include <stdio.h>

/**
 * main -> a function to print its  name
 * @argc: argc parameter
 * @argv: an  array of a command listed
 * Return: 0 for success
 */
int main(int argc _attributed_((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
