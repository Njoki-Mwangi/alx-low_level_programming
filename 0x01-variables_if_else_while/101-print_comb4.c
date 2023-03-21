#include <stdio.h>
/**
 * main - Entry point
 * Description:print all possible different combinations of three digits
 * Return:always 0 (success)
 */
int main(void)
{
int a;
int b;
int c;

for (a = 0 ; a < 10 ; a++)

{
for (b = 1 ; b < 10 ; b++)
{
for (c = 2 ; c < 10 ; c++)
{
if (a < b && b < c)
{
putchar(a + '0');
putchar(b + '0');
putchar(c + '0');
if (a + b + c != 24)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
