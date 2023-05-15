#include "main.h"

list *add_node(list **head_ref, int new_data) {
    list *second;
    list *next;

    second = malloc(sizeof(list));
    if (second == NULL)
    {
        return NULL;
    }

    else {
        second->data = new_data;
        second->next = (*head_ref);
        (*head_ref) = second; 

    }
    return (*head_ref);
}