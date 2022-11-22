#include "main.h"

/**
 * get_flags - Calculates active flags
 * @format: Formatted string in which to print the arguments
 * @i: take a parameter.
 * Return: Flags:
 */
int get_flags(const char *format, int *i)
{
	/* - + 0 # ' ' */
	/* 1 2 4 8  16 */
	int j, this_i;
	int flags = 0;
	const char FLAGS_CH[] = {'-', '+', '0', '#', ' ', '\0'};
	const int FLAGS_ARR[] = {FLAGS_MINUS, FLAGS_PLUS, 
		FLAGS_ZERO, FLAGS_HASH, FLAGS_SPACE, 0};

	for (this_i = *i + 1; format[this_i] != '\0'; this_i++)
	{
		for (j = 0; FLAGS_CH[j] != '\0'; j++)
			if (format[this_i] == FLAGS_CH[j])
			{
				flags = flags|FLAGS_ARR[j];
				break;
			}

		if (FLAGS_CH[j] == 0)
			break;
	}

	*i = this_i - 1;

	return (flags);
}
