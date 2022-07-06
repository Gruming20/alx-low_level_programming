#include "main.h"

/**
 * print_alphabet_x10 - prints "alphabets 10 times"
 *
 * Return: nothing
 */
void print_alphabet_x10(void)
{
char low;
int j;
for (j = 0; j < 10; j++)
{
for (low = 'a'; low <= 'z'; low++)
_putchar(low);
_putchar('\n');
}
}
