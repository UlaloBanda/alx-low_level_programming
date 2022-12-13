#include <stdio.h>
#include <stdlib.h>

/**
 *main - print alphabet with upper and lower case
 *
 *
 *
 *Return: 0
 *
 */

int main(void){
	int ch;
	for(ch = 'a'; ch <= 'z'; ch++){
		putchar(ch);
	}

	for(ch = 'A'; ch <= 'Z'; ch++){
		putchar(ch);
	}

	return(0);
}
