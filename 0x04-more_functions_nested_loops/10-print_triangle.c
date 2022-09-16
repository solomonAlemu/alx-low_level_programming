#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *print_triangle - print_triangle
 *Description: - print_triangle
 *@size: size
 *Return: void
 */
void print_triangle(int size)
{
	int i, x = 0;

	if (size < 0)
	{
		_putchar('\n');
		return;
	}
	for (x = 1; x <= size; x++)
	{
		for (i = 0; i < (size - x); i++)
		{
			_putchar(' ');
		}
		for (i  = size; i > (size - x); i--)
		{
			_putchar('#');
		}
	_putchar('\n');
	}
}
