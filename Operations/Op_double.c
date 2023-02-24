#include "../pushswap.h"

void ft_ss(stack *a, stack*b)
{
    ft_swap(&a);
    ft_swap(&b);
}

void ft_rr(stack *a, stack*b)
{
    ft_rotate(&a);
    ft_rotate(&b);
}

void ft_rrr(stack *a, stack*b)
{
    ft_reverse_rotate(&a);
    ft_reverse_rotate(&b);
}
