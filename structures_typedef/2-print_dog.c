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
		printf("NULL");|
	}
	if (d->name == NULL)
	{
		printf("Name: (nail)\n");
		printf("Age: %f\n", d->age);
		printf("Owner: (nail)\n");
	}
	if (d->name != NULL)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
