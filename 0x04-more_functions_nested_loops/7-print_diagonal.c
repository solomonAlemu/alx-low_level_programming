#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *print_diagonal - a program that prints from 0 to 9,
 *Description: - prints from 0 to 9
 *@n: the
 *Return: void
 */
void print_diagonal(int n)
{
	int i, x = 0;

	if (n < 0)
	{
		_putchar('\n');
		return;
	}
	for (x = 0; x < n; x++)
	{
		for (i = 0; i < x; i++)
		{
			_putchar(' ');
		}
	_putchar('\\');
	_putchar('\n');

	}
}
