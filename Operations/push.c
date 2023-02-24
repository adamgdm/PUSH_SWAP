#include "../pushswap.h"

void ft_push(stack **a, stack **b)
{
    stack *temp;
    stack *pemt;

    if ((*b))    
    {
        temp = (*a);
        pemt = (*b);
        if ((*b)->next)
        {
            (*b) = (*b)->next;
            (*b)->previous = NULL;
        }
        pemt->next = (temp);
        if (*a)
            temp->previous = pemt;
        (*a) = pemt;
    }
}