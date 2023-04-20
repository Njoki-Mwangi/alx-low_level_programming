#include "3-calc.h"

/**
* op_add - Adds two integers
* @a: The first integer to add
* @b: The second integer to add
*
* Return: The sum of the two integers
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - Subtracts two integers
* @a: The integer to subtract from
* @b: The integer to subtract
*
* Return: The difference of the two integers
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - Multiplies two integers
* @a: The first integer to multiply
* @b: The second integer to multiply
*
* Return: The product of the two integers
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - Divides two integers
* @a: The integer to divide
* @b: The integer to divide by
*
* Return: The quotient of the two integers
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
* op_mod - Computes the remainder of dividing two integers
* @a: The integer to divide
* @b: The integer to divide by
*
* Return: The remainder of the division of the two integers
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

