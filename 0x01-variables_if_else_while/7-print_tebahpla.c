#include <stdio.h>
#include <stdlib.h>
/**
 *main - print alphabet in reverse
 *
 *Return: 0
*/

int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}

	putchar(ch);

	return(0);
}
