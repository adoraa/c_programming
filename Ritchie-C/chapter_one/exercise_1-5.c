#include <stdio.h>
/**
 * main - prints Fahrenheit-Celsius table
 * Return: 0 on success
 */
int main(void)
{
	int fahr;

	for (fahr = 300; fahr >= 0; fahr = fahr - 20)
		printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
	return (0);
}
