#include <stdio.h>
/**
 * main - A program that prints alphabet in lowercase and in uppercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 97;
	int m = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (m <= 99)
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}