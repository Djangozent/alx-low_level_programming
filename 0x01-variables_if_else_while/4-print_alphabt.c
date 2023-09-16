#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 * followed by a new line, except q and e
 * Return: Always 0 (success)
 */
int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		if (i != 'e' && i != 'q')
		{
			putchar(i);
		}
		i++;
	}
	putchar('\n');
	return (0);
}
