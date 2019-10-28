#include "libmx.h"

void mx_pop_back(t_list **head) {
    t_list *front = *head;
    if (front->next == NULL) {
        free(front);
    }
    t_list *current = *head;
    while(current->next->next != NULL){
        current = current->next;
    }
    free(current->next);
    current->next = NULL;
}

