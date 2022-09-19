#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 *max_prime_factors -   Program to find largest prime
 *description - A function to find largest prime factor
 *@n: the number
return: long long int
 */

long long max_prime_factors(long long n)
{

/** Initialize the maximum prime factor
*/
/** variable with the lowest one
*/
	
	long long max_prime = -1;
	

	
	/* Print the number of 2s that divide n*/
	
	while (n % 2 == 0)
		
	{
		
		max_prime = 2;
		
		n >>= 1; /* equivalent to n /= 2*/
		
	}
	
/* n must be odd at this point*/
	
	while (n % 3 == 0)
		
	{
		
		max_prime = 3;
		
		n=n/3;
		
	}
	

	
	/* now we have to iterate only for integers*/
	
	/* who does not have prime factor 2 and 3*/
	
	for (int i = 5; i <= sqrt(n); i += 6)
		
	{
		
		while (n % i == 0) {
			
			max_prime = i;
			
			n = n / i;
			
		}
		
		while (n % (i+2) == 0)
			
		{
			
			max_prime = i+2;
			
			n = n / (i+2);
			
		}
		
	}
	

	
	/* This condition is to handle the case */
	
	/* when n is a prime number greater than 4*/
	
	if (n > 4)
		
		max_prime = n;
	

	
	return max_prime;
	
}



/** 

 *main - Driver program to test above function

 *description - >>

 *return: void

 */

int main(void)
	
{
	
	long long n = 612852475143;
	

	
	max_prime_factors(n);
	
}

