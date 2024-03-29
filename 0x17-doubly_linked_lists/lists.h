#ifndef LISTS_H
#define LISTS_H
/**
 *struct dlistint_t - doubly linked list
 *@n: node index
 *@prev: points to previous node
 *@next: points to next node
 *
 *Description: doubly linked list node structure
 */
typedef struct list_n
{
int n;
struct list_n *next;
struct list_n *prev;
} dlistint_t;
size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
void free_dlistint(dlistint_t *head);
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);

#endif
