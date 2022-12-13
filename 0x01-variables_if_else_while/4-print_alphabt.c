#include <stdlib.h>
#include <stdio.h>

/**
 *main - print alphabt
 *
 *
 *return: 0
 */

int main(void)
{
	int ch;
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'e' || ch == 'q')
			continue;
		putchar(ch);
	}

	putchar('\n');

return(0);
}
