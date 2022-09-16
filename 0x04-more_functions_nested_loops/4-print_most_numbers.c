#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *print_numbers - a program that prints from 0 to 9,
 *Description: - prints from 0 to 9
 *Return: void
 */
void print_most_numbers(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
			_putchar(i + '0');
		else
			continue;
	}

		_putchar('\n');
}
