#include <stddef.h>
#include "function_pointers.h"
/**
*int_index - searches for an integer in an array using a function pointer
*@array: pointer to an array of integers
*@size: Number of elements in the array
@cmp: Pointers to the function used to compare values
*
*Return: index of the first element
*/
int int_index(int *array, int size, int (*cmp)(int))
{
if (array == NULL || cmp == NULL || size <= 0)
return -1;

int i;
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
return i;
}
return -1;
}

