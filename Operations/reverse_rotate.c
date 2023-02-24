#include "../pushswap.h"

void ft_reverse_rotate(stack **s)
{
    stack *a;
    stack *last;
    int argc;

    argc = ft_count_linkedlist_elements(*s);
    if (argc > 2)    
    {
        a = *s;
        last = *s;
        while (last->next)
            last = last->next;
        while (a->next)
            a = a->next;
        last->next = (*s);
        (*s) = (*s)->next;
        (*s)->previous = NULL;
        last = last->next;
        last->next = NULL;
        last->previous = a;      
    }
}