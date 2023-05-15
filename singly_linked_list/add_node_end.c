#include "main.h"

list *add_node_end(list **head_ref, int new_data) {
    list *temp;
    list *next;
    list *last;

    last = malloc(sizeof(list));
    last->next = NULL;
    temp = *head_ref;
    
    if (temp == NULL)
    {
        return NULL;
    }

    while(temp->next != NULL){
        temp = temp->next;
    }
    last->data = new_data;
    temp->next = last;

    return (*head_ref);
}