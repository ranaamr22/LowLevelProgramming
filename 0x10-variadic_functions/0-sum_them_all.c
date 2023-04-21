#include "variadic_functions.h"

/**
 * sum_them_all - calculates the sum of the parameters
 * @n: number of arguments passed
 *
 * Return: the sum of parameters (success)
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list param;
	unsigned int i;
	int sum = 0;

	va_start(param, n);

	for (i = 0; i < n; i++)
		sum += va_arg(param, int);

	va_end(param);
	return (sum);
}
