#include <stdio.h>
/**
 * main - entry point of the program
 *
 * description: verifying if the expression of
 * getchar() != EOF is 0 or 1
 * Return: 0 on succes
 *
 * result: c = getchar() != EOF is 0
 * it's advisable to use parentheses to assign the value first
 */
int main(void)
{
	int c;

	while (c = getchar() != EOF)
		putchar(c);
	return (0);
}
