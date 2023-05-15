#include "main.h"

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