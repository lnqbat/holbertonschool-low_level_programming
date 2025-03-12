#include "main.h"

/**
 * _calloc - allocates memory for an array
 *
 * @nmemb: number elements
 * @size: in octect
 *
 * Return: string to allocates memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)

{
	void *ptr;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for ( ; i < nmemb * size; i++)
		((char *)ptr)[i] = 0;

	return (ptr);
}

