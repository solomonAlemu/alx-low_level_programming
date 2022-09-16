#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *print_square - a program that prints from 0 to 9,
 *Description: - prints from 0 to 9
 *@size: the
 *Return: void
 */
void print_square(int size)
{
	int i, x = 0;

	if (size < 0)
	{
		_putchar('\n');
		return;
	}
	for (x = 0; x < size; x++)
	{
		for (i = 0; i < size; i++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
