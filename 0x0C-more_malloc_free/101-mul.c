#include "main.h"

/**
 * main - Program multiplies two positive numbers
 * @argc: n arguments
 * @argv: args
 * Description: Usage: mul num1 num2. num1 and num2 will be passed in base 10
 * Print the result, followed by a new line. 
 * If the number of arguments is incorrect, print Error, followed by a
 * new line, and exit with a status of 98
 * num1 and num2 should only be composed of digits. If not, print Error,
 * followed by a new line, and exit with a status of 98
 *
 * Return: int result
 */

int main(int argc, char *argv[])
{
unsigned long mul;
int i, j;
	if (argc != 3)
	{ printf("Error\n");
	exit(98); }
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > 57 || argv[i][j] < 48)
			{  printf("Error\n");
			exit(98); }
		}

	}
	mul = atol(argv[1]) *  atol(argv[2]);
	printf("%lu\n", mul);
return (0);
}
	
