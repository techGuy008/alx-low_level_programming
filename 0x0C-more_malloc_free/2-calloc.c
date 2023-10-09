#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @b: char to copy
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s
 */
void *_memset(void *s, int c, size_t n)
{
    unsigned char *p = s;
    while (n > 0)
    {
        *p = (unsigned char)c;
        p++;
        n--;
    }
    return s;
}

/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */
void *_calloc(size_t nmemb, size_t size)
{
    if (nmemb == 0 || size == 0)
        return NULL;

    size_t total_size = nmemb * size;
    void *ptr = malloc(total_size);

    if (ptr == NULL)
        return NULL;

    _memset(ptr, 0, total_size);

    return ptr;
}