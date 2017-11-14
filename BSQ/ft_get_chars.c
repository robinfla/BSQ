#include "BSQ.h"


char            ft_get_char_void(char *argv)
{
    int i;
    char *buf;
    int fd;
    char v;

    i = 0;
    fd = open(argv, O_RDONLY);
    if ((buf = malloc(80 * sizeof(char))) == NULL)
        return (0);
    while (read(fd, &buf[i], 1))
    {
        if (buf[i] == '\n')
            break;
        i++;
    }
    v = buf[i - 3];
    free (buf);
    close(fd);
    return (v);
}

char            ft_get_char_obst(char *argv)
{
    int i;
    char *buf;
    int fd;
    char o;

    i = 0;
    fd = open(argv, O_RDONLY);
    if ((buf = malloc(80 * sizeof(char))) == NULL)
        return (0);
    while (read(fd, &buf[i], 1))
    {
        if (buf[i] == '\n')
            break;
        i++;
    }
    o = buf[i - 2];
    free (buf);
    close(fd);
    return (o);
}

char            ft_get_char_full(char *argv)
{
    int i;
    char *buf;
    int fd;
    char p;

    i = 0;
    fd = open(argv, O_RDONLY);
    if ((buf = malloc(80 * sizeof(char))) == NULL)
        return (0);
    while (read(fd, &buf[i], 1))
    {
        if (buf[i] == '\n')
            break;
        i++;
    }
    p = buf[i - 1];
    free (buf);
    close(fd);
    return (p);
}
