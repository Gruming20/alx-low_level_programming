#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 /**
 * randomKeygen - a function that generates a random passowrds.
 * main - check the code for the randomKeygen and print passwords.
 * @N: An integer input pointer.
 *
 * Return: Always 0.
 */
void randomKeygen(int N)
{
int i = 0;
int random = 0;
srand((unsigned int)(time(NULL)));

char password[11];
char *num;
char *letter;
char *symbols;
char *LETTER;
num = "0123456789";
letter = "abcdefghijklmnoqprstuvwyzx";
LETTER = "ABCDEFGHIJKLMNOQPRSTUYWVZX";
symbols = "!@#$^&*?";

random = rand() % 4;
for (i = 0; i < N; i++)
{
if (random == 1)
{
password[N] = num[rand() % 10];
random = rand() % 4;
printf("%c", password[N]);
}
else if (random == 2)
{
password[N] = symbols[rand() % 8];
random = rand() % 4;
printf("%c", password[N]);
}
else if (random == 3)
{
password[N] = LETTER[rand() % 26];
random = rand() % 4;
printf("%c", password[N]);
}
else
{
password[N] = letter[rand() % 26];
random = rand() % 4;
printf("%c", password[N]);
}
}
}

int main(void)
{
int N=10;
randomKeygen(N);

return 0;
}

