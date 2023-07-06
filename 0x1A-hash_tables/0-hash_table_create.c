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
    hash_node_t *array = NULL;
    hash_t = (hash_table_t *)malloc(sizeof(hash_table_t));
    array = (hash_node_t *)malloc(sizeof(hash_node_t));


    if(!array || !hash_t)
    {
        fprintf(stderr, "could not allocate memory");
        return(NULL);
    }
    hash_t->array = array;
    return(hash_t);
}
