#include <stdio.h>
#include <stdlib.h>


typedef struct List {
    int data;
    struct List *next;
    struct List *prev;
} list;

list *add_node(list **head_ref, int new_data);
int print_list(list *list1);
list *add_node_end(list **head_ref, int new_data);
int list_len(list *h);
list *add_node_at(list **head_ref, int new_data, int position);
void *add_after(list *prev_node, int new_data);


int main() {
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

int list_len(list *h){
    int l_len;
    l_len = 0;
    list *temp = h;

    while(temp != NULL) {
        temp = temp->next;
        l_len++; 
    }
    return l_len;
}

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


int print_list(list *h) {
    list *temp = h;
    printf("\n\nList elements are - \n");
    printf("[head:0x%p] --->", h);
    while(temp != NULL) {
        printf("[%d | 0x%p] --->", temp->data, temp->next);
        temp = temp->next;
    }
    return 0;
}


