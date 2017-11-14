#include "BSQ.h"

char            **ft_fill_map(char **map, int c, int l, char o, char p)
{
    int i;
    int j;
    int length;
    int pos;

    length = ft_biggest_square(map, c, l, o);
    pos = ft_find_position_square(map, c, l, o);
    i = (pos / (c - 1)) - length + 1;
    while (i < (pos / (c - 1)) + 1)
    {
        j = (pos % (c -1)) - length + 1;
        while (j < (pos % (c -1)) + 1)
        {
            map[i][j] = p;
            j++;
        }
        i++;
    }
    return (map);
}

void         ft_print_solution(int i, char **argv)
{
    int fd;
    char **map = NULL;
    int j;
    int c;
    int l;
    char o;
    char p;

    j = 0;
    o = ft_get_char_obst(argv[i]);
    p = ft_get_char_full(argv[i]);
    c = ft_get_number_columns(argv[i]);
    l = ft_get_number_lines(argv[i]);
    fd = open (argv[i], O_RDONLY);
    if (fd >= 0)
    {
        map = ft_read_file(argv[i]);
    }
    ft_fill_map(map, c, l, o, p);
    while (j < l)
    {
        ft_putstr(map[j]);
        ft_putchar('\n');
        j++;
    }
    free(map);
    close (fd);
}

int         main(int argc, char ** argv)
{
    int i;

    i = 1;
    if (argc > 1)
    {
        while (i < argc)
        {
            if ((ft_verif_map(argv[i])) == 1)
                ;
            else
            {
                ft_print_solution(i, argv);
            }
            i++;
        }
    }
    else
        return (0);
}
