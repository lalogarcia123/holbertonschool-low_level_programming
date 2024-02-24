#include <stdio.h>

/**
  * main - impresion de numeritos con for del 1 al 9
  *
  * Return: Algo va aqui
  */
int main(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}

	putchar('\n');

	return (0);
}
