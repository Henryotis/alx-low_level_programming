#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Description: prints all the numbers of base 16
 * in lowercase, followed by a new line.
 * Return: 0
 */
int main(void)
{
	char g;

	for (g = '0'; g <= '9'; g++)
	{
		putchar(g);
	}
	for (g = 'a'; g <= 'f'; g++)
	{
		putchar(g);
	}
putchar('\n');
return (0);
}
