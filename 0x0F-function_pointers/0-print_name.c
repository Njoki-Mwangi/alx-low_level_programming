#include <stdio.h>
#include "function_pointers.h"
/**
* print_name - prints a name
* @name: pointer to the name to be printed
* @f: pointer to a function that takes a char pointer parameter
*
* Description: This function takes a pointer to a character string
*/

void print_name(char *name, void (*f)(char *))
{
f(name);
}
