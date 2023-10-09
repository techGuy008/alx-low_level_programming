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
    return (memset(s, c, n));
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
    {
        return (NULL);
    }
    return (calloc(nmemb, size));
}