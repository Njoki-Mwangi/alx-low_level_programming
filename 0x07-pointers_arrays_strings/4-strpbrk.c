#include<stdio.h>
#include "main.h"
/**
*_strpbrk - search a string for any set of bytes
*@s: string
*@accept: string in this program
*Return: a pointer to bytes
*/
char *_strpbrk(char *s, char *accept)
{
int i, j;

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
return (&s[j]);
}
}
}
return (NULL);
}
