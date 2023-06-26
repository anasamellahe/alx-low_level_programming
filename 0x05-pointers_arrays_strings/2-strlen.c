/**
 * _strlen - calculate the length of a string
 * @s:  the string pointedto by 's'
 * Return:  the number of bytes in the stringpointed to by s.
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
