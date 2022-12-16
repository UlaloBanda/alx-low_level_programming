#include "main1.h"
#include <stdio.h>

int _isdigit(int c);
/**
 *main - find digit
 *
 *
 *Return: 0
*/

int main(void)
{
	char c;

	c = 'c';
	printf("%c: %d\n", c, _isdigit(c));
	c = 'a';
	printf("%c: %d\n", c, _isdigit(c));
	return (0);
}
