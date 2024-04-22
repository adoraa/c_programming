#include <stdio.h>
/**
 * main - prints its input one word per line
 * Return: 0 on success
 */

int main(void)
{
	int c;

	while ((c = getchar()) != EOF)
	{
		if (c == ' ' || c == '\n' || c == '\t')
			putchar('\n');
		else
			putchar(c);
	}
}
