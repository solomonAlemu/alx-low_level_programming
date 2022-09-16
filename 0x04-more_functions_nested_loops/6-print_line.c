#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *print_line - a program that prints from 0 to 9,
 *Description: - prints from 0 to 9
 *@n: the
 *Return: void
 */
void print_line(int n)
{
	int i = 0;

	if (n < 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < n; i++)
	{
		_putchar('-');
	}

		_putchar('\n');
}
