#include "main.h"
#include <stdio.h>
/**
*print_line- Thish draws a straight line
*Return: Always 0.
*/

void print_line(int n)
{
  int n;
  if (n <= 0) 
  {
    _putchar('\n');
    }else
        for (int i = 0; i < n; i++)
        {
            _putchar('_');
        }
    _putchar('\n');
    }

}