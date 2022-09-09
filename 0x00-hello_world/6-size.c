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

	printf("Size of a char: %d %s \n", sizeof(char), "byte(s)");

	printf("Size of a int: %d %s\n", sizeof(int), "byte(s)");

	printf("Size of a long int: %d %s\n", sizeof(long int), "byte(s)");

	printf("Size of a long long int: %d %s \n", sizeof(long long int), "byte(s)");

	printf("Size of a float: %d %s \n", sizeof(float), "byte(s)");

	return (0);

}
