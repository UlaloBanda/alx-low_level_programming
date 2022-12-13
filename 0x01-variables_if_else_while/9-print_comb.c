#include <stdio.h>
#include <stdlib.h>
/**
 * main - print combinations
 *
 * Return: 0
*/

int main(void)
{
	int ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
		putchar(',');
		putchar(' ');

		if (ch == '9')
		{
			putchar('9');
		}
	}

	return (0);
}
