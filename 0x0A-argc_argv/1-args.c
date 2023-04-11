#include<stdio.h>
/**
*main -Entry point
*@argc:integer that represents number of arguments
*@argv:arrays of strings rep actual arguments
*Return: Always 0 (success)
*/
int main(int argc, char *argv[])
{
(void) argv;
printf("%d\n", argc - 1);

return (0);
}
