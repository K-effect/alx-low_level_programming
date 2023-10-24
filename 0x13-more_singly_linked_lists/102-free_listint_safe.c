#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t list safely (handles loops).
 * @h: Pointer to a pointer to the head of the linked list.
 *
 * Return: Size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
    size_t node_count = 0;
    listint_t *slow, *fast, *temp;

    if (h == NULL || *h == NULL)
        return (node_count);

    slow = *h;
    fast = *h;

    while (slow && fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
            slow = *h;
            while (slow != fast)
            {
                temp = slow;
                slow = slow->next;
                node_count++;
                free(temp);
            }
	    
	    while (fast->next != slow)
            {
                temp = fast->next;
                node_count++;
                free(fast);
                fast = temp;
            }

            node_count++;
            free(fast);
            *h = NULL;
            break;
        }
    }

    while (*h != NULL)
    {
        temp = *h;
        *h = (*h)->next;
        node_count++;
        free(temp);
    }

    return (node_count);
}
