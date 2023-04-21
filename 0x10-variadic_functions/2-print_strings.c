#include "variadic_functions.h"

/**
 * print_strings - prints strings given as parameters
 * @separator: string to be printed between strings
 * @n: number of strings passed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list param;
	char *str;

	va_start(param, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(param, char *);
		if (str == NULL)
			str = "(nil)";
		if (!separator)
			printf("%s", str);
		else if (separator && i == 0)
			printf("%s", str);
		else
			printf("%s%s", separator, str);
	}

	va_end(param);
	printf("\n");
}
