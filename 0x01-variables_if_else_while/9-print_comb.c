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
	}

	putchar('\n');

	return (0);
}
