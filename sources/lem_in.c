/*
** EPITECH PROJECT, 2022
** KOBAN
** File description:
** lem_in
*/

#include "../include/my.h"

t_list *add_node(t_list *list, int data)
{
    t_list *new_node = malloc(sizeof(t_list));
    t_list *tmp = list;
    new_node->data = data;
    new_node->next = NULL;
    if (list == NULL)
        return (new_node);
    while (tmp->next != NULL)
        tmp = tmp->next;
    tmp->next = new_node;
    return (list);
}

void display_list(t_list *list)
{
    t_list *tmp = list;
    while (tmp != NULL)
    {
        my_put_nbr(tmp->data);
        tmp = tmp->next;
    }
    my_putchar('\n');
}

void create_list(t_list **list)
{
    *list = NULL;
    *list = add_node(*list, 1);
    *list = add_node(*list, 2);
    *list = add_node(*list, 3);
}

debug_t *debug_struct(debug_t *debug)
{
    debug = malloc(sizeof(debug_t));
    debug->nb_fourmi = 0;
    debug->nb_rooms = 0;
    return (debug);
}

char *print_first_line(char *str)
{
    int i = 0;
    int j = 0;
    char *str2 = malloc(sizeof(char) * (my_strlen(str) + 1));
    while (str[i] != '\n')
    {
        str2[i] = str[i];
        i++;
    }
    str2[i] = '\0';
    return (str2);
}

void main(int ac, char **av)
{
    debug_t *debug = debug_struct(debug);
    char *a = txttochar(av[1]);
    if (error_handling(ac, av, a) == 84)
        return;
    my_putstr(a);
    t_list *list = NULL;
}
