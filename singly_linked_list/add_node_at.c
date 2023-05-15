#include "main.h"

list *add_node_at(list **head_ref, int new_data, int position) {
    list *new_node;
    list *temp;
    list *next;
    int i;
    new_node = malloc(sizeof(list));
    
    temp = *head_ref;
    
    for(i = 0; i > (position + 1); i++){
        if (temp->next != NULL){
            temp = temp->next;
        }
    }
    new_node->data = new_data;
    new_node->next = temp->next;
    temp->next = new_node;
    return(*head_ref);
}