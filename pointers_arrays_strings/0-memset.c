#include "main.h"

/**
 * _memset - Sets the memory area to the same byte.
 *
 * @s: Pointer to memory area
 * @b: Constant byte
 * @n: Number of bytes
 *
 * Description: Fills the first n bytes of the memory pointed to by s with
 * the constant b.
 * Return: s - Pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
