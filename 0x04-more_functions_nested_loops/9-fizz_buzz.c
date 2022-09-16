#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *fizz_buzz- a program that prints from 0 to 9,
 *Description: - prints from 0 to 9
 *Return: void
 */
int main(void)
{
	int i;

	for (i = 1; i < 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("fizz_buzz");
			putchar(' ');
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
			putchar(' ');
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
			putchar(' ');
		}
		else
			printf("%d ", i);
	}
	putchar('\n');
	return (0);
}
