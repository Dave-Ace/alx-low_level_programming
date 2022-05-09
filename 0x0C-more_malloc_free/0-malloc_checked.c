#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked - allocates memmory
 * @b: variable
 */
void *malloc_checked(unsigned int b)
{
int s = malloc(b);
if (s == 0)
return (0);   
}
