#include "main.h"
/**
 * _strcpy - copies the string pointed to by src to the
 *buffer pointed   *to by dest
 * @dest: the destination pointed to by 'dest'
 * @src:  the string pointed to by 'src'
 * Return: a pointer to the destination string dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
