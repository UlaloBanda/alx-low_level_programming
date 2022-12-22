#include <ctype.h>
#include <stdio.h>

char *string_toupper(char s[])
{
	int i = 0;

	while (s[i])
	{
		putchar(toupper(s[i]));
		i++;
	}

	return (0);
}
