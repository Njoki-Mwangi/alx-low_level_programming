#include <stdio.h>
/**
 * main - Entry point
 * Description:print hexadecimal
 * Return:Always 0 (success)
 */
int main(void)
{
	char hex[] = "0123456789abcdef\n";

	for (int i = 0; i < 16; i++)

	{
		putchar(hex[i]);
	}
	return (0);
}
