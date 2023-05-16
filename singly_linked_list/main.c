#include "main.h"


int main(void) {
    list *head;
    list *first = NULL;
    list *second = NULL;

    first = malloc(sizeof(list));
    second = malloc(sizeof(list));
    first->data = 30;
    second->data = 20;

    head = first;
    first->next = second;
    second->next = NULL;
    add_node(&head, 20);
    add_node(&head, 10);
    add_node_end(&head, 34);
    add_node_at(&head, 90, 0);
    add_after(head->next->next, 100);
    

    print_list(head);
    printf("Length of linked list - %d", list_len(head));

    return 0;
}
