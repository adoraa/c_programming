#include <stdio.h>
/**
 * main - replaces each tab by \t, backspace by \b and backslash by \\
 *
 * description: a program that copies its input to its output, replacing each
 * tab by \t, each backspace by \b, and each backslash by \\.
 * This makes tabs and backspaces visible in an unambiguous way.
 *
 * Return: 0 on success
 */
int main(void)
{
	int ch;

	while ((ch = getchar()) != EOF)
	{
		if (ch == '\t')
		{
			putchar('\\');
			putchar('t');
		}
		else if (ch == 8)
		{
			putchar('\\');
			putchar('b');
		}
		else if (ch == '\\')
		{
			putchar('\\');
			putchar('\\');
		} else
			putchar(ch);
	}
	return (0);
}
