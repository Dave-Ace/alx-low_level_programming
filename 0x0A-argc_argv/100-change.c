#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: argument
 * @argv: argument array
 * Return: 0
 */
int main(int argc, char **argv)
{
int cents = atoi(argv[1]);
int coins = 0;
if (argc == 1 || argc > 2)
{
printf("Error\n");
return (1);
}
if (cents < 0)
{
printf("%d\n", 0);
return (1);
}
while (cents > 0)
{
if (cents >= 25)
cents -= 25;
else if (cents >= 10)
cents -= 10;
else if (cents >= 2)
cents -= 2;
else if (cents >= 1)
cents -= 1;
coins += 1;
}
printf("%d\n", coins);
return (0);
}
