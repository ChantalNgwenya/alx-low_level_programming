#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initializes a variable of type struc dog
 * @d :array
 * @name : name
 * @age : age
 * @owner :owner
 *
 * Return : this structure is for dog
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
