#include "pushswap.h"

void ft_sort_two(stack **a)
{
    stack *b;
    int first;
    int second;

    b = *a;
    first = b->value;
    b = b->next;
    second = b->value;
    if (first > second)
        printf("sa\n");
}

void ft_sort_stack(stack *arguments)
{
    int argument_count;

    argument_count = ft_count_linkedlist_elements(arguments);
    if (argument_count == 2)
        ft_sort_two(&arguments);
}