#include "main.h"

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
