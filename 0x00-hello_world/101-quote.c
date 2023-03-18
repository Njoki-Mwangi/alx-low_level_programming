#include <stdio.h>
#include <unistd.h>
/**
 * main -Entry point
 * Description-print a message
 *
 * Return:Always 0 (success)
 */
	int main(void)
{
	write(2, "and that piece of art is useful\" - Dor Korpar, 2015-10-19\n", 59);

	return (1);
}
