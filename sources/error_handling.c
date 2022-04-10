/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** error_handling
*/

#include "../include/my.h"

int check_start(char *str)
{
    int i = 0, m = 0;
    while (str[i] != '\0') {
        if (str[i] == '#' && str[i + 1] == '#'
            && str[i + 2] == 's' && str[i + 3] == 't'
            && str[i + 4] == 'a' && str[i + 5] == 'r'
            && str[i + 6] == 't' ) {
                m = m + 1;
            }
            i++;
    }
    if (m == 1) {
        return (0);
    }
    return (84);

}

int check_end(char *str)
{
    int i = 0, m = 0;
    while (str[i] != '\0') {
        if (str[i] == '#' && str[i + 1] == '#'
            && str[i + 2] == 'e' && str[i + 3] == 'n'
            && str[i + 4] == 'd') {
                m = m + 1;
            }
            i++;
    }
    if (m == 1) {
        return (0);
    }
    return (84);

}

int error_handling(int ac, char **av, char *str)
{
    if (ac != 2)
        return (84);
    if (check_start(str) == 84)
        return (84);
    if (check_end(str) == 84)
        return (84);
    return (0);
}
