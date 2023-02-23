#include "main.h"

/**
 * print_alphabet - a function that prints 10x the alphabet, in lowercase
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int m;
	char n;

	for (m = 0; m <= 10; m++)
	{
		for (n = 'a'; n <= 'z'; n++)
			_putchar(n);
		_putchar('\n');
	}
}
