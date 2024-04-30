#include "sort.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sorting - inserts new node in sorted order into doubly linked list
 * @root: pointer to a pointer to head of doubly linked list
 * @new: pointer to the new node to be inserted
 */
void sorting(listint_t **root, listint_t *new)
{
	listint_t *curr = *root;

	if (*root == NULL || (*root)->n >= new->n)
	{
		new->next = *root;
		if (*root != NULL)
			(*root)->prev = new;
		*root = new;
		print_list(*root);
	}
	else
	{
		curr = *root;
		while (curr->next != NULL && curr->next->n < new->n)
		{
			curr = curr->next;
		}
		new->next = curr->next;
		if (curr->next != NULL)
			curr->next->prev = new;
		curr->next = new;
		new->prev = curr;
		print_list(*root);
	}
}

/**
 * insertion_sort_list - sorts a doubly linked list
 * @list: pointer to a pointer to the head of the doubly linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *srt;
	listint_t *curr;
	listint_t *next;

	srt = NULL;
	curr = *list;
	while (curr != NULL)
	{
		next = curr->next;

		curr->prev = curr->next = NULL;
		sorting(&srt, curr);
		curr = next;
	}
	*list = srt;
}
