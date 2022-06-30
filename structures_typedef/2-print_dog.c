#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 * @d: d
 * Return: void
 **/
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
	}
	if (d->name == NULL)
	{
		printf("Name: (nail)\n");
			else if (d->owner == NULL)
			{
				printf("Owner: (nail)\n");
			}
			else
			{
				printf("Age: %f\n", d->age);
			}
	}
	else if (d->name != NULL)
	printf("Name: %s\n", d->name);
	printf("Age: %s\n", d->age);
	printf("Owner: %s\n", d->owner);
}
