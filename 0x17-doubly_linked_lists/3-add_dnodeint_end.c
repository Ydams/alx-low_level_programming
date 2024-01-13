#include "lists.h"

/**
* add_dnodeint_end - this adds a new node at the end
* of a dlistint_t list
*
* @head: the head of the list
* @n: the value of the element
* Return: this is the address of the new element
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *h;
dlistint_t *new;

new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);

new->n = n;
new->next = NULL;

h = *head;

if (h != NULL)
{
while (h->next != NULL)
h = h->next;
h->next = new;
}
else
Ju	{
*head = new;
}

new->prev = h;

return (new);
}
