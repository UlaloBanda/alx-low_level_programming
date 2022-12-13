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

		if (ch == '9')
		{
			putchar('9');
		} 
		else
		{
			putchar(ch);
			putchar(',');
			putchar(' ');
		}
	}

	return (0);
}
