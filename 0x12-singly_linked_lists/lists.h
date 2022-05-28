#ifndef LIST_H
#define LIST_H
size_t print_lists(const list_t *h);
int _putchar(char c);
/**
 * struct list_s - singly linked list
 * @str: string
 * @len: length of the string
 * @next: points to the next node
 * Description: singly linked list ndoe structure
 */
typedef struct list_s
{
char *str;
unsigned int len;
struct list_s *next;
} list_t;
#endif