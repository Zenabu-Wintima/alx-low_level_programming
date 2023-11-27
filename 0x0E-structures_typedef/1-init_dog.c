#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to struct dog to initialize
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initialize
 *
 * Description: This function initializes a struct dog with the provided
 * name, age, and owner. If the pointer to struct dog is NULL, it allocates
 * memory for the struct dynamically.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
d = malloc(sizeof(struct dog));

d->name = name;
d->age = age;
d->owner = owner;
}
