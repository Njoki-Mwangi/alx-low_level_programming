#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
* @argc: The number of arguments
* @argv: The array of arguments
*
* Return: Always 0
*/
int main(int argc, char **argv)
{
    int i, n;

    if (argc != 2)
    {
        printf("Error\n");
        return (1);
    }

    n = atoi(argv[1]);

    if (n < 0)
    {
        printf("Error\n");
        return (2);
    }

    char *addr = (char *)main;

    for (i = 0; i < n; i++)
    {
        printf("%02hhx ", addr[i]);
    }

    printf("\n");

    return (0);
}

