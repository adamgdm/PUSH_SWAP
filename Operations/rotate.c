#include "../pushswap.h"

void ft_rotate(stack **s)
{
    stack *a;
    stack *last;
    int argc;

    argc = ft_count_linkedlist_elements(*s);
    if (argc > 2)    
    {
        a = *s;
        while (a->next)
            a = a->next;
        last = a;
        a = a->previous;
        a->next = NULL;
        last->next = (*s);
        last->previous = NULL;
        (*s)->previous = last;
        (*s) = last;
    }
}