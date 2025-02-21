#include "main.h"

/**
 * _isalpha - checks if a character is anphabetic
 * @c: input character
 * Description: checks if the character is from the alphabet
 * Return: 1 = is a alphabet letter, 0 = is not a alphabet letter
 */
int _isalpha(int c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	if ('A' <= c && c <= 'Z')
		return (1);
	else
		return (0);
}
