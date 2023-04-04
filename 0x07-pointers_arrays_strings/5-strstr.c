#include<stdio.h>
#include "main.h"
/**
*_strstr - locate a substring
*@haystack: string
*@needle: string
*Return: pointer to the beginning of the located substring
*
*/
char *_strstr(char *haystack, char *needle)
{
while (*haystack != '\0')
{
char *h = haystack;
char *n = needle;
while (*n != '\0' && *h == *n)
{
h++;
n++;
}
if (*n == '\0')
{
return (haystack);
}
haystack++;
}
return (NULL);
}
