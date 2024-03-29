#include "lists.h"
/**
 * free_list - function that frees a list_t list
 * @head: pointer to nodes
 * Return: nothing
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}

