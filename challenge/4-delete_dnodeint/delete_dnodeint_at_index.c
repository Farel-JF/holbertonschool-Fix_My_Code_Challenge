#include "lists.h"

/**
 * delete_dnodeint_at_index - Delete a node at a specific index from a list
 *
 * @head: A pointer to the pointer to the first element of a list
 * @index: The index of the node to delete
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *current;
    dlistint_t *tmp;
    unsigned int i;

    if (*head == NULL)
        return (-1);

    current = *head;

    for (i = 0; current != NULL && i < index; i++)
        current = current->next;

    if (current == NULL)
        return (-1);

    if (current == *head)
    {
        *head = current->next;
        if (*head != NULL)
            (*head)->prev = NULL;
    }
    else
    {
        current->prev->next = current->next;
        if (current->next != NULL)
            current->next->prev = current->prev;
    }

    free(current);

    return (1);
}
