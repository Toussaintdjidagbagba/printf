#include "main.h"

/**
 * printstr- print str.
 * @pa: agurm
 * @format: format str.
 * Return: number str for print.
 */
int printstr(char *format, va_list pa)
{
	char *string = va_arg(pa, char *);
	int max;
	(void)format;

	if (string == NULL)
		string = "(null)";
	max = _puts(string);
	return (max);
}
