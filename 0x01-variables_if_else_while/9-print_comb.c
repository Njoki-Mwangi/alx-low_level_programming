#include <stdio.h>
/**
 * main - Entry point
 * Description:combinations of single_digit numbers
 * Return: Always 0 (success)
 */
int main(void)
{
int num;

for (num = 0; num < 10; num++)
{
putchar(num + '0');

if (num < 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');


return (0);
}

