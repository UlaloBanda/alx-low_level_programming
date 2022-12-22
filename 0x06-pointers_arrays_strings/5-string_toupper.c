#include "main5.h"
#include <stdio.h>

/**
 *main - Lowercase change to uppercase
 *
 *Return: 0.
*/

int main(void)
{
	char str[] = "Look up!\n";
	char *ptr;

	ptr = string_toupper(str);
	printf("%s", ptr);
	printf("%s", str);

	return (0);
}
