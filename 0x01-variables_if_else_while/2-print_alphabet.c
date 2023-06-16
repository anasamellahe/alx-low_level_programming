#include <unistd.h>
/**
 * main - print alphabet
 *
 * Return: always 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 10; i++)
		write(1, &"0123456789\n"[i], 1);
	return (0);
}
