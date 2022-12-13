#include <stdlib.h>
#include <stdio.h>
/**
*main - print numbers in base 16
*
*
*Return: 0
*/

int main(void)
{
	int ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}

	for (ch = 'a';ch <= 'f'; ch++)
	{
		putchar(ch);
	}

	putchar('\n');
return (0);
}
