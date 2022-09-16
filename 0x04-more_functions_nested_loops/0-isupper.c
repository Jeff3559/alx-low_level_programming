#include "main.h"

/**
 * _isupper -> this is a function to check upper case of alphabets
 * @c: an integer parameter
 * Return: somthing but success
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	
	return (0);
}
