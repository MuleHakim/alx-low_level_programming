#include "main.h"

/**
 * _realloc -  reallocates a memory block using malloc and free
 * @ptr: pointer
 * @old_size: old size
 * @new_size: new size
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *str;
	char *ptr = s;
	unsigned int i;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		str = malloc(new_size);
		return (str);
	}
	str = malloc(new_size);
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < old_size; i++)
	{
		*(str + i) = *(ptr + i);
	}

	free(ptr);
	return (relloc);
}
