#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
    int data;
    struct node *next;
} node;

int main (void) {
    node *head;
    head = NULL;
    head =  (node *)malloc(sizeof(node));
    head->data = 20;

    printf("Head-> data: %d\n", head->data);
    printf("Head->add: %p\n", head);
    return 0;
}
