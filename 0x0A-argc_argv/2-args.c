#include <stdio.h>
#include "main.h"
/**
*main- entry point
*@argc:integer that represents number of arguments
*@argv:arrays of strings rep actual arguments
*Return: Always 0 (success)
*/
int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
