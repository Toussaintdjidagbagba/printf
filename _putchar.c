#include <unistd.h>

/**
 * _putchar - print char with stdout
 * @ch: char to print
 * Return: Output.
 */
int _putchar(char ch)
{
	static int max;
	static char buffer[1024];

	if (ch == -1)
	{
		max = 0;
		return (0);
	}
	if (ch == -2 || max == 1024)
	{
		write(1, buffer, max);
		max = 0;
	}
	if (ch != -1 && ch != -2)
	{
		buffer[max] = ch;
		max++;
		return (1);
	}
	return (0);
}
