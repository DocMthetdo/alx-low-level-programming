#include <stdio.h>
/**
 * main - A program that prints combinations of two two digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m;

	for (n = 0; n <= 99; n++)
	{
		for (m = n + 1; m < 100; m++)
		{
			putchar(n / 10 + '0');
			putchar(n % 10 + '0');
			putchar(' ');
			putchar(m / 10 + '0');
			putchar(m % 10 + '0');
			if (n != 98 || m != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
