#include "main.h"

/**
 * _strpbrk -> search a stringe for any of a set of bytes
 * @s: the string
 * @accept: bytes to be searched for
 * Return: pointer to appropriate
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
