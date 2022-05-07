#include <ctype.h>
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
int cent = atoi(argv[1]);
if (argc == 1 || argc > 2)
{
printf("Error\n");
return (1);
}
printf("%d\n", cent / 10);
return (0);
}
