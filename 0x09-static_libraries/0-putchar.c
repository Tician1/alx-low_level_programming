#include "main.h"

/**
 * main - prints _putchar *
 * Description: prints _putchar *
 * Return: 0 (Success)
 */

int main(void)
{
	char text[9] = "_putchar";
	int t = 0;

	for (t = 0; t < 8; t++)
	{
		_putchar(text[t]);
	}
	_putchar('\n');
	return (0);
}
