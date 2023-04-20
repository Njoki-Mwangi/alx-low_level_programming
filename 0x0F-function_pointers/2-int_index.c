#include "function_pointers.h"
/**
*int_index - searches for an integer in an array using a function pointer
*@array: pointer to an array of integers
*@size: Number of elements in the array
*@cmp: pointer to the function used to compare values
*
*Return: index of the first element
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}

	return (-1);
}

