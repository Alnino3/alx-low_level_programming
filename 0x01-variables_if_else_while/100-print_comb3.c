#include <stdio.h>

/**
 * main - Prints numbers between 00 to 89.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ii, ee;

	ii = 48;
	ee = 48;

	while (ee < 58)
	{
		ii = 48;
		while (ii < 58)
		{
			if (ee != ii && ee < ii)
			{
				putchar(ee);
				putchar(ii);
				if (ii == 57 && ee == 56)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			ii++;
		}
		ee++;
	}
	putchar('\n');
	return (0);
}
