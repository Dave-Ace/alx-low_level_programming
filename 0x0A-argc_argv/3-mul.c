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
int i;
int mul = 1;
if (argc < 3 && argc > 3)
{
printf("ERROR\n");
return (1);
}
else
{
for (i = 1; i < argc; i++)
mul *= atoi(argv[i]);
printf("%d\n", mul);
return (0);
}
}