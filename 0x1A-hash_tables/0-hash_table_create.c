#include "hash_tables.h"
<<<<<<< HEAD

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 *
 * Return: pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	unsigned long int i;

	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
		return (NULL);
	hash_table->size = size;
	hash_table->array = malloc(size * sizeof(hash_node_t *));
	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		hash_table->array[i] = NULL;
	return (hash_table);
}
=======
/**
 * hash_table_create - Entry point
 * @size: is the size of the array
 * 
 * Return: returns a hash table on success
 */

hash_table_t *hash_table_create(unsigned long int size)
{
    size_t n;
    hash_table_t *hash_t = NULL;
    hash_t = (hash_table_t *)malloc(sizeof(hash_table_t));

    if(size == 0)
    {
        fprintf(stderr, "hash table size too low");
        return(NULL);
    }

    if(!hash_t)
    {
        fprintf(stderr, "could not allocate memory");
        return(NULL);
    }
    hash_t->size = size;
    hash_t->array = malloc(sizeof(hash_node_t *) * size);
    for(n=0; n < size; ++n)
    {
        hash_t->array[n] = NULL;
    }
    return(hash_t);
}
>>>>>>> 17aa0819f20208fa9642c3b1aeeede3e2c74b1eb
