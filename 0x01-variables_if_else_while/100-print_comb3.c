#include <stdio.h>
/**
 * main - Write a program that prints all possible different combinations
 * of two digits.
 *
 * Return: return 0
 */
int main(void)
{
	int digit0, digit1;

	for (digit0 = 0; digit0 < 9; digit0++)
	{
		for (digit1 = digit0 + 1; digit1 < 10 ; digit1++)
		{
			putchar((digit0 % 10) + '0');

			putchar((digit1 % 10) + '0');

			if (digit0 == 8 && digit1 == 9)
		continue;
	putchar(',');
	putchar(' ');
}
	}
	putchar('\n');
	return (0);
}
