#ifndef _MAIN_H_
#define _MAIN_H_

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

#endif /* _MAIN_H_ */