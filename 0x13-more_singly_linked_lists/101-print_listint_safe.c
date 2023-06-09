#include "lists.h"
#include <stdio.h>

/**
 * free_listint_t -  frees a listint_t list.
 * @head: head of a list
 * Return: no return
 */
void free_listint_t(listint_t **head)
{
	listint_t *tmp;
	listint_t *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((tmp = curr) != NULL)
		{
			curr = curr->next;
			free(tmp);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - prints a linked list
 * @head: head of a list
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nnodes = 0;
	listint_t *hptr, *new, *add;
;
	hptr = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listint_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)head;
		new->next = hptr;
		hptr = new;

		add = hptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listint_t(&hptr);
				return (nnodes);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nnodes++;
	}

	free_listint_t(&hptr);
	return (nnodes);
}
