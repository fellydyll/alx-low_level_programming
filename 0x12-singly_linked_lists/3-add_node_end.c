#include "lists.h"

/**
 * add_node_end - add new node
 * @head: first node
 * @str: string pointer
 *
 * Return: addres of new element
 * or NULL if it fail
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *new_node, *last;


	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	dup = strdup(str);
	if (dup == NULL)
	{
		free(new_node);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;
	new_node->str = dup;
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new_node;
	}

	return (*head);
}
