#include <stdio.h>

/**
 * main - Prints numbers between 012 to 789.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, e, g;

	i = 48;
	e = 48;
	g = 48;

	while (i < 58)
	{
		e = i + 1;
		while (e < 58)
		{
			g = e + 1;
			while (g < 58)
			{
				putchar(i);
				putchar(e);
				putchar(g);
				if (i < 55 || e < 56 || g < 57)
				{
					putchar(',');
					putchar('');
				}
				g++;
			}
			e++;
		}
		i++;
	}
	putchar(10);
	return (0);
}
