#include "main.h"

void *add_after(list *prev_node, int new_data) {
    list *new_node;
    new_node = malloc(sizeof(list));

    if (prev_node == NULL) {
        printf("Error returned NULL");
    }

    else {
        new_node->data = new_data;
        new_node->next = prev_node->next;
        prev_node->next = new_node;
    }
}
