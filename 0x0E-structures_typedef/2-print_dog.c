#include <stdio.h>
#include "dog.h"

/**
* print_dog - prints the elements of a struct dog
* @d: pointer to a struct dog
*
* Return: void
*/
void print_dog(struct dog *d)
{
if (d)
{
printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
printf("Age: %.6f\n", d->age);
printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
}
}

