#include "hash_tables.h"
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
    hash_t = malloc(sizeof(hash_table_t));

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
