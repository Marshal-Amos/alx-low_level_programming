#include "main.h"

/**
 * print_alphabet - a function that prints alphabets in lower case
 *
 * Return: none
 */
void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}
