#include <stdio.h>

/**
  * main - imprime el alfabeto al revez
  *
  * Return: ----d
  */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
