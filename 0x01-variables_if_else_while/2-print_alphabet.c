#include <unistd.h>
/**
 * main - print alphabet
 *
 * Return: always 0
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		write(1, &alphabet, 1);
	write(1, "\n", 1);
	return (0);
}
