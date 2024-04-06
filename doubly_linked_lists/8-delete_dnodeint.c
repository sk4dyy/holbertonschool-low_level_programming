#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t linked list
 * @head: double pointer to the head of the linked list
 * @index: index of the node to delete
 *
 * Return: 1 if successful, -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *current = *head;
    unsigned int i = 0;

    if (*head == NULL)
        return (-1);

    if (index == 0)
    {
        *head = current->next;
        if (*head != NULL)
            (*head)->prev = NULL;
        free(current);
        return (1);
    }

    while (current != NULL && i < index)
    {
        current = current->next;
        i++;
    }

    if (current == NULL)
        return (-1);

    current->prev->next = current->next;
    if (current->next != NULL)
        current->next->prev = current->prev;

    free(current);
    return (1);
}