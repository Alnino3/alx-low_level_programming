#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ii, jj;

	for (ii = 0; ii < 100; ii++)
	{
		for (jj = 0; jj < 100; jj++)
		{
			if (ii < jj)
			{
				putchar((ii / 10) + 48);
				putchar((ii % 10) + 48);
				putchar(' ');
				putchar((jj / 10) + 48);
				putchar((jj % 10) + 48);
				if (ii != 98 || jj != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}

		}
	}
	putchar('\n');
	return (0);

}
