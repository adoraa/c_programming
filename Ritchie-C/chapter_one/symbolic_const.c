#include <stdio.h>
/**
 * main - starting/entry point of the program
 * LOWER: table's lower limit
 * UPPER: upper limit
 * STEP: step size
 *
 * description: Farenheit-Celcius table
 * Return: 0 on success
 */
#define LOWER 0
#define UPPER 300
#define STEP 20
int main(void)
{
	int fahr;

	for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
		printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
	return (0);
}
