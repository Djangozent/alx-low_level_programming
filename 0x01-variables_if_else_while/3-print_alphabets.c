#include <stdio.h>
/**
 * main - prints the alphhabet in lowercase, and then in uppercase
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	for (a = 'a'; a <= 'z'; a++)
		putchar(a);
	for (a = 'A'; a <= 'Z'; a++)
		putchar(a);
	putchar('\n');
	return(0);
}
