# ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <stddef.h>

typedef struct stack 
{
    struct stack *previous;
    int value;
    struct stack *next;
} stack;

typedef struct elem 
{
    int first;
    int second;
    int third;
} elements;

typedef struct 
{
    int start;
    int finish;
    int len;
} indexes;

int ft_check_sort(stack **a);
char *ft_check_numbers(char *str, int i, int j);
char *ft_check_morethanmaxint(char *str, int i, int start, int len);
char *ft_checkrepetition(char *str, int ac);
char *ft_joinandcheck(int argc, char **argv);
int ft_strlen(char *str);
char *ft_strcat(char *dest, const char *src);
char *ft_substr(char *str, int start, int finish);
long long ft_atoll(char *str, long long res, long long sign, size_t i);
void *ft_calloc(size_t count, size_t size);
char *ft_join_arguments(int argc, char **argv);
int *ft_get_values(char *str, int ac, int index, int i);
int ft_split_arguments(int index, char *str, int i, int current_index);
int ft_arguments_count(char *str);
void printLinkedList(stack* head);
void ft_fill_stack(stack **a, int arg);
stack *ft_create_the_stack(int argc, char *args);

int ft_find_min(stack **s);
int ft_count_linkedlist_elements(stack* head); 

void ft_swap(stack **s, char c);
void ft_rotate(stack **s, char c);
void ft_push(stack **a, stack **b, char c);
void ft_reverse_rotate(stack **s, char c);
void ft_ss(stack *a, stack *b);
void ft_rr(stack *a, stack *b);
void ft_rrr(stack *a, stack *b);

stack *ft_sort_stack(stack **arguments, stack **b);
stack *ft_sort_two(stack **a);
stack *ft_sort_three(stack **a);
stack *ft_sort_five(stack **a, stack **b, int argc, int index);

void ft_rotate_b_elements(stack **b);

#endif