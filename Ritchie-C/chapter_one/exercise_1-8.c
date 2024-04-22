#include <stdio.h>
/**
 * main - counts blanks, tabs and newlines
 * Return: 0 on success
 */
int main(void)
{
	int n, c = 0;

	for (; (n = getchar()) != EOF;)
	{
		if (n == ' ')
			++c;
		if (n == '\t')
			++c;
		if (n == '\n')
			++c;
		printf("%d\n", c);
	}
	return (0);
}
