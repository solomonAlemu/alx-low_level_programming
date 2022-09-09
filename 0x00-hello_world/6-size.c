#include <stdio.h>

/**
* main - program entry pint
*
* Description: Write a C program that prints the size of various types
* on the computer it is compiled and run on.
*
* Return: 0
*/

int main(void)
{

	printf("Size of a char: %d %s", sizeof(char), "byte(s)\n");

	printf("Size of a int: %d %s", sizeof(int), "byte(s)\n");

	printf("Size of a long int: %d %s", sizeof(long int), "byte(s)\n");

	printf("Size of a long long int: %d %s", sizeof(long long int), "byte(s)\n");

	printf("Size of a float: %d %s", sizeof(float), "byte(s)\n");

	return (0);

}
