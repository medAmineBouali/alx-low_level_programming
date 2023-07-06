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
    hash_node_t *head = NULL;
    hash_node_t *new_node;
    head = (hash_node_t *)malloc(sizeof(hash_node_t));

    if(!head)
    {
        fprintf(stderr, "could not allocate memory for head of the hash map");
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
        free(new_node);
    }
    return(head);
}
