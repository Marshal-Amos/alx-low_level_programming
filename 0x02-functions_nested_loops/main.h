#ifndef _MAIN_H_
#define _MAIN_H_


/**
 * _putchar - writes the character c to stdout
 *
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);


/**
 * print_alphabet - a function that prints the alphabet, in lower case
 *
 */
void print_alphabet(void);


/**
 * print_alphabet_10x - a function that prints 10 times the alphabet, in lower case
 *
 */
void print_alphabet_x10(void);


/**
 * _islower - a function that checks for lower character
 *
 */
int _islower(int c);


/**
 * isalpha - a function that checks for alphabetic character
 *
 */
int _isalpha(int c);


/**
 * print_sign - a function that prints the sign of a number
 *
 */
int print_sign(int n);


/**
 * _abs - a function that computes the absolute value of an integer
 *
 */
int _abs(int);


/**
 * print_last_digit - a function that prints the lasts digit of a number
 *
 */
int print_last_digit(int);


/**
 * jack_bauer - a function that prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
 *
 */
void jack_bauer(void);


/**
 * times_table - a function that prints the 9 times table,
 * starting with 0
 *
 */
void times_table(void);


/**
 * add - a function that adds two integers and returns the result
 *
 */
int add(int, int);


/**
 * print_to_98 - a function that prints all natural numbers from n to 98
 *
 */
void print_to_98(int n);


/**
 * print_times_table - a function that prints the n times table,
 * starting with 0
 *
 */
void print_times_table(int n);

#endif
