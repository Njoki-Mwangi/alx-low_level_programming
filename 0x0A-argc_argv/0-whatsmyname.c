#include<stdio.h>

/**
*main - entry point
*@argc:integer that indicates the number command line arguments
*@argv:array of strings with command line arguments
*Return: Always 0 (success)
*/
int main(int argc __attribute__((unused)), char *argv[])
{
printf("%s\n", *argv);

return (0);
}
