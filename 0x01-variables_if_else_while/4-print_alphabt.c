#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always o (Success)
 */
int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		if (alph == 'q' || alph == 'e')
		{
			continue;
		}
		else
		{
			putchar(alph);
		}
	}
	putchar('\n');
	return (0);
}
