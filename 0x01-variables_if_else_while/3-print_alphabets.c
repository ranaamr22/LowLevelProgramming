#include <stdio.h>
/*
 * main - prints alphabets in lowercase then in upercase
 * Describtion: prints alphabets in lowercase then in upercase
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
