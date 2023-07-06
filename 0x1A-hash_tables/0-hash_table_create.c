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
    hash_node_t *head = NULL;
    hash_node_t *new_node;
    head = (hash_node_t *)malloc(sizeof(hash_node_t));
    hash_t = (hash_table_t *)malloc(sizeof(hash_table_t));


    if(!head || !hash_t)
    {
        fprintf(stderr, "could not allocate memory");
        return(NULL);
    }
    for (n = 0; n < size; n++)
    {
        new_node = (hash_node_t *)malloc(sizeof(hash_node_t));
        if(!new_node)
    {
        fprintf(stderr, "could not allocate new memory");
        return(NULL);
    }
        head->next = new_node;
    }
    return(hash_t);
}
