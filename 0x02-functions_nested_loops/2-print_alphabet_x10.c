/*
 * File: 2-print_alphabeth_x10.c
 */

#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase, followed
 *						by a new line 10 times.
 */
void print_alphabet_x10(void)
{
	char letter;
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
