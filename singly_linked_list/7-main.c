#include <stdio.h>

typedef struct Node {
    int data;
    struct node *next;
}node;

int main() {
/* Initialize nodes */
node *head;
node *one = NULL;
node *two = NULL;
node *three = NULL;

/* Allocate memory */
one = malloc(sizeof(node));
two = malloc(sizeof(node));
three = malloc(sizeof(node));

/* Assign data values */
one->data = 1;
two->data = 2;
three->data = 3;

/* Connect nodes */
one->next = two;
two->next = three;
three->next = NULL;

/* Save address of first node in head */
head = one;
}