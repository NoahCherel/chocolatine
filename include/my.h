/*
** EPITECH PROJECT, 2021
** MY H
** File description:
** Contains all prototypes
*/

#include <stdlib.h>
#include <unistd.h>
#include <getopt.h>
#include <stdio.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <time.h>

#ifndef MY_H_
#define MY_H_
typedef struct debug_s {
    int nb_fourmi;
    int nb_rooms;
} debug_t;

typedef struct s_list {
    int data;
    int room;
    int fourmi;
    struct s_list *next;
} t_list;

/*my_lib*/
void my_putchar(char c);
void my_put_nbr(int nb);
size_t my_strlen(char const *str);
void my_putstr(char const *str);
int my_strcmp(char const *s1, char const *s2);

/*my_lib2*/
int my_strtoint(char *str);
int my_chartoint(char str);
int my_compute_power_rec(int nb, int power);
void array_to_2d(char **final_list, char *new_list, int line);
char *my_inttostr(int num);

/*my_lib3*/
int count_line(char *list);
int word_longer(char *filepath);
char *txttochar(char *filepath);
char *my_revstr(char *str);

/*error handling*/
int error_handling(int ac, char **av, char *str);
int check_start_end(char *str);

#endif
