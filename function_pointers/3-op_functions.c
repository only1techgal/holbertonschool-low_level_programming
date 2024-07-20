#include <stdio.h>
#include <stdlib.h>

/**
 *op_add: Returns the sum of two integers
 *@a: The first integer to be added
 *@b: The second integer to be added
 *
 *Return: The sum of a and b
 */
int op_add(int a, int b)
{
return (a + b);
}

 /**
  *op_sub: Returns the difference of two integers
  *@a: The first integer to be subtracted
  *@b: The second integer to be subtracted
  *
  *Return: The difference of a and b
  */
int op_sub(int a, int b)
{
return (a - b);
}

  /**
   *op_mul - Returns the product of two integers
   *@a: The first integer to be multiplied
   *@b: The second integer to be multiplied
   *
   *Return: The product of a and b
   */
int op_mul(int a, int b)
{
return (a * b);
}

   /**
   *op_div - Returns the division of two integers
   *@a: The numerator
   *@b: The denominator
   *
   *Return: The quotient of a divided by b
   */
int op_div(int a, int b)
{
return (a / b);
}

   /**
    *op_mod - Returns the remainder of the division of two integers
    *@a: The numerator
    *@b: The denominator
    *
    *Return: The remainder of a divided by b
    */
int op_mod(int a, int b)
{
return (a % b);
}
