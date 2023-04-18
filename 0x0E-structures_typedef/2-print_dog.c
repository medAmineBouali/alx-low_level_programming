#include "dog.h"
#include <stdlib.h>
/**
 *print_dog - prints variables of type struct dog
 *@d: pointer to struct dog to initialize
 *
 *@owner: owner to initialize
 */
void print_dog(struct dog *d)
{
	printf("Name = %s\n",d.name);
	printf("Age = %lf\n",d.age);
	printf("Owner = %s\n",d.owner);
}
