#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *more_numbers - a program that prints from 0 to 9,
 *Description: - prints from 0 to 9
 *Return: void
 */
void more_numbers(void)
{
	int i, x = 0;

	for (x = 0; x < 10; x++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i > 9)
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			}
			else
				_putchar(i + '0');
		}
		_putchar('\n');
	}
}
