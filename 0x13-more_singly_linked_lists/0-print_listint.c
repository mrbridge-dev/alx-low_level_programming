/**
 * By: Richard Osei Juantuah
 */
#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: list argument variable
 *
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;
	listint_t *p = h ? h->next : NULL;

	if (h)
	{
		printf("%d\n", h->n);
		num++;
	}
	if (p)
	{
		while (p)
		{
			printf("%d\n", p->n);
			num++;
			p = p->next;
		}
	}
	return (num);
}
