#include <stdio.h>
/**
 *A program to print the corresponding Celsius to Fahrenheit table.
 */
void main()
{
  float fahr, celsius;
  int lower_lim, upper_lim, step;

  lower_lim = 0;
  upper_lim = 300;
  step = 20;

  celsius = lower_lim;
  printf("Celsius - Farenheit Table\n");
  while (celsius <= upper_lim)
    {
      fahr = ((celsius * 9.0) + 160.0) / 5.0;
      printf("%3.f℃ %3.2f℉\n", celsius, fahr);
      celsius += step;
    }
}
