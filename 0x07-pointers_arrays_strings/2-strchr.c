#include<stdio.h>
#include"main.h"
/**
*_strchr - locate a charcter in a string
*
*@c: character value
*@s: string
*Return: a pointer
*/
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
if (*s == c)
{
return (s);
}
return (NULL);
}

