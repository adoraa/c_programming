#include <stdio.h>
/**
 * main - copy input to output while character != EOF
 */
void main()
{
  int c;

  c = getchar();
  while (c != EOF) 
    {
      if ((c != EOF) == 0 || (c != EOF) == 1)
      {
          putchar(c);
          c = getchar();
          printf("%d", EOF);
      } else
	      break;
    }
}
