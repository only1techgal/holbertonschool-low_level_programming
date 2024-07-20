#include <stdio.h>
#include <stdlib.h>

/**
 *op_add: Returns the sum
 *@a: The first integer of the sum which is to be returned
 *@b: The second intager of the sum which is to be returned
 *
 *Return: 1 (success)
 */
 int op_add(int a, int b)
 {
    return (a + b);
 }

 /**
  *op_sub: Returns the difference 
  *@a The first integer of the difference ti be returned
  *@b: the seconf integer of the difference to be returned
  *
  *Return: 0 (success)
  */
  int op_sub(int a, int b)
  {
   return (a - b);
  }

  /**
   *op_mul - Returns the product
   *@a: The first integer of the product which is to be returned
   *@b: The second integer of the product whihc is to be retuned
   *
   *Return: 1 (Success)
   */
   int op_mul(int a, int b)
   {
      return (a * b);
   }

   /**
   *op_div - Returns the division
   *@a: The first integer of the division which is to be returned
   *@b: The second integer of the division which is to be returned
   *
   *Return: 0 (Success)
   */
   int op_div(int a, int b)
   {
      return (a / b);
   }

   /**
    *op_mod - Returns the remainder
    *@a: The first integer of the the remainder which is to be returned
    *@b: The second integer of the remainder which is to be returned
    *
    *Return: 
    */
    int op_mod(int a, int b)
   {
      return (a % b);
   }
    