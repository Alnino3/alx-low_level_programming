#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 */
void print_alphabet_x10(void)
{
int ten;
char ko;
for (ten = 0; ten <= 9; ten++)
{
for (ko = 'a'; ko <= 'z'; ko++)
	_putchar(ko);
_putchar('\n');
}
}
