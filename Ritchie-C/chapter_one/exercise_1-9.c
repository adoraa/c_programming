#include <stdio.h>
/**
 * main - copies its input to its output replaces each string
 * of one or more blanks by a single blank
 * Return: 0 on success
 */
int main(void)
{
	int c;

	while ((c = getchar()) != EOF)
	{
		if (c != ' ')
			putchar(c);
	}
	return (0);
}
