#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 * @head: pointer to the head of the list
 *
 * Return: the data of the head node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
int data;
listint_t *temp;

if (*head == NULL) /* check if the list is empty */
return (0);

data = (*head)->n; /* save the data of the head node */
temp = (*head)->next; /* save the next node */
free(*head); /* delete the head node */
*head = temp; /* set the head to the next node */

return (data);
}

