#include <stdio.h>

/**
 * main - prints the first50 fibonacci
 * followed by a new line.
 * Return: Always 0
 */

int main(void)
{
	long int fibonacci[50];
	int i;

	fibonacci[0] = 1;
	fibonacci[1] = 2;
	printf("%ld, %ld, ", fibonacci[0], fibonacci[1]);

	for (i = 2; i < 50; i++)
	{
		fibonacci[i] = fibonacci[i - 2] + fibonacci[i - 1];
		if (i == 49)
			printf("%ld\n ", fibonacci[i]);
		else
			printf("%ld, ", fibonacci[i]);
	}
	return (0);
}
