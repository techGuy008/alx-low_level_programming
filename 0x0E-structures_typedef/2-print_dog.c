#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print dog
 * @d: pointer to struct dog
 */

void print_dog(struct dog *d)
{
if (d != NULL)
{
printf("Name: ");
d->name == NULL ? printf("(nil)") : printf("%s", d->name);
printf("\nAge: %f\n", d->age);
printf("Owner: ");
d->owner == NULL ? printf("(nil)") : printf("%s", d->owner);
printf("\n");
}
}
