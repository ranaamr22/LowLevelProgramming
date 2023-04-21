#include "variadic_functions.h"

/**
 * print_numbers - prints numbers separated by a separator
 * @separator: string to be printed between numbers
 * @n: number of integers passed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list param;
	unsigned int i;

	va_start(param, n);

	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
			printf("%d", va_arg(param, int));
		else
		{
			printf("%d", va_arg(param, int));
			printf("%s", separator);
		}
	}
	va_end(param);
	printf("\n");
}
