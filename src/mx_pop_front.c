#include "libmx.h"

void mx_pop_front(t_list **head) {
    t_list *front = *head;
    t_list *second = front->next;
    free(front);
    *head = second;
}
