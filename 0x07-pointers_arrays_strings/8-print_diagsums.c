#include<stdio.h>

#include"main.h"
/**
*print_diagsums- prints the sum of the two diagonals of a square matrix
*@size: size or length
*@a: pointer
*Return: Always 0 (success);
*/
void print_diagsums(int *a, int size)
{
int i, sum1 = 0, sum2 = 0;

for (i = 0; i < size; i++)
{
sum1 += *(a + i * size + i);
sum2 += *(a + i * size + (size - i - 1));
}
printf("%d, %d\n", sum1, sum2);
}
