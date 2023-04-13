#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_grid - prints a grid of integers
 * @grid: the address of the two dimensional grid
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
int **alloc_grid(int width, int height)
 {
    int **mee;
    int i;

    if (width <= 0 || height <= 0)
        return (NULL);

    mee = malloc(sizeof(int *) * height);
    if (mee == NULL)
        return (NULL);

    for (i = 0; i < height; i++) {
        mee[i] = malloc(sizeof(int) * width);
        if (mee[i] == NULL) {
            for (i--; i >= 0; i--)
                free(mee[i]);
            free(mee);
            return (NULL);
        }
    }
return (mee);
}
