#ifndef __FT_BSQ_H__
# define __FT_BSQ_H__
#include <fcntl.h>
#include <errno.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/uio.h>

void        ft_putchar(char c);
void        ft_putstr(char *str);
void        ft_cat(void);
void        ft_putnbr(int nb);
int         ft_get_number_lines(char *argv);
char        ft_get_char_void(char *argv);
char        ft_get_char_obst(char *argv);
char        ft_get_char_full(char *argv);
int         ft_get_number_columns(char *argv);
char        **ft_read_file(char *argv);
void        ft_get_second_line(int fd);
int         ft_strlen(char *str);
char        *ft_strcpy(char *dest, char *src);
int         ft_verif_chars(char *argv);
int         ft_verif_columns(char *argv);
int         ft_verif_returns(char *argv);
int         ft_verif_map(char *argv);
int         ft_get_next_columns(char *argv, int fd);
int         ft_atoi(char *str);
void        ft_print_names(int i, int argc, char **argv);
int         ft_size_file(char *argv);
void        ft_display_file(int i, int fd, int argc, char **argv);
int         ft_min(int a, int b, int c);
int         **ft_generate_map(int l, int c);
int         ft_biggest_square(char **map, int c, int l, char o);
int         ft_find_position_square(char **map, int c, int l, char o);
char        **ft_fill_map(char **map, int c, int l, char o, char p);
void        ft_print_solutions(int i, char *argv);

#endif

