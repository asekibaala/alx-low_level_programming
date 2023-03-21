#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabet 10 times.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int tr1, tr2;

	for (tr1 = 0; tr1 <= 9; tr1++)
	{
		for (tr2 = 97; tr2 <= 122; tr2++)
		{
			_putchar(tr2);
		}
	_putchar('\n');
	}
}
