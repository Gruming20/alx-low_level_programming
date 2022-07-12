#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for the program 101-crackme.
 *
 * Return: always 0
 */
int main(void)
{
int i, n, letter, symbol;
char c[] = "!@#$^&0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char p[66];

srand(time(NULL));
while (symbol != 2772)
{
i = letter = symbol = 0;
while ((2772 - 122) > symbol)
{
n = rand() % 62;
p[i] = c[n];
symbol += c[n];
i++;
}
while (c[letter])
{
if (c[letter] == (2772 - symbol))
{
p[i] = c[letter];
symbol += c[letter];
i++;
break;
}
letter++;
}
}
p[i] = '\0';
printf("%s", p);
return (0);
}
