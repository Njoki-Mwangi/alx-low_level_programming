#include <stdio.h>
#include <stdlib.h>

/**
*main - Entry point
*@argc: The number of arguments
*@argv: The array of arguments
*
*Return: Always 0
*/
int main(int argc, char *argv[])
{
int bytes, i;
unsigned char *arr;
if (argc != 2)
{
printf("Error\n");
exit(1);
}
bytes = atoi(argv[1]);

if (bytes < 0)
{
printf("Error\n");
exit(2);
}

arr = (unsigned char *)main;

for (i = 0; i < bytes; i++)
{
printf("%02x", arr[i]);

if (i < bytes - 1)
printf(" ");
else
printf("\n");
}

return (0);
}

