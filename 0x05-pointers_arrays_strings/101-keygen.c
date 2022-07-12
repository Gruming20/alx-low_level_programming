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

char *num;
num = "0123456789";
char letter[] = "abcdefghijklmnoqprstuvwyzx";
char LETTER[] = "ABCDEFGHIJKLMNOQPRSTUYWVZX";
char symbols[] = "!@#$^&*?";
char password[10];

random = rand() % 4;
for (i = 0; i < N; i++)
{
if (random == 1)
{
password[i] = num[rand() % 10];
random = rand() % 4;
printf("%c", password[i]);
}
else if (random == 2)
{
password[i] = symbols[rand() % 8];
random = rand() % 4;
printf("%c", password[i]);
}
else if (random == 3)
{
password[i] = LETTER[rand() % 26];
random = rand() % 4;
printf("%c", password[i]);
}
else
{
password[i] = letter[rand() % 26];
random = rand() % 4;
printf("%c", password[i]);
}
}
}

int main(void)
{
int N = 10;
randomKeygen(N);

return 0;
}

