#include "libmx.h"

t_list *mx_sort_list(t_list *lst, bool (*cmp)(void *, void *)) {

    t_list *current = lst;
    int size = 0;
    t_list *counter = lst;

    while(counter->next != NULL) {
        counter = counter->next;
        size++;
    }

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (cmp(current->data, current->next->data)){
                t_list *tmp = current;
                current = current->next;
                current->next = tmp;
            }
            current = current->next;   
        }
    }
    return lst;
}
