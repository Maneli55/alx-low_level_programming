#include <stdio.h>

/**
 *main - print numbers from 0 to 9.
 *Return: Always 0
 */

int main(void)
{
	int n;

	for (n = '0' ; n <= '9' ; n++)
	{
		putchar(n);
		if (n != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
