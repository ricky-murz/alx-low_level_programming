#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

struct dog {
    char *name;
    float age;
    char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner)
{
    /* Allocate memory for the name and owner strings */
    d->name = (char *)malloc(strlen(name) + 1);
    d->owner = (char *)malloc(strlen(owner) + 1);
    
    /* Copy the name and owner strings to the allocated memory */
    strcpy(d->name, name);
    strcpy(d->owner, owner);
    
    /* Assign the age */
    d->age = age;
}
