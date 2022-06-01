#include <ctype.h>
#include <stdlib.h>
#include <string.h>
/**
 * binary_to_uint - unction that converts a binary number to an unsigned int
 * @b: pointer pointer to a string o 0 and 1 chars
 * Return: 0 or converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0; 
	int i, bin, digit, mod;
	int len = strlen(b);
	int p;
	for (i = 0; i < len - 1; i++)
	{
		if (isalpha(b[i]))
			return (0);
	}
	digit = atoi(b);
	for (i = 0; len > 0; len--)
	{
		mod = digit % 10;
		digit = digit / 10;
		bin = 2;
		for (p = 1; p <= i; p++)
			bin *= 2;
		if (mod != 1 && mod != 0)
			return (0);
		sum = sum + (mod * bin);
		i++;
	}
	return sum;
}
