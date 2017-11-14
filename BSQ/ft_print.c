#include "BSQ.h"

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		{
			ft_putchar(str[i]);
			i++;
		}
}

void		ft_putnbr(int nb)
{
	int i;
	char array[10];

	i = 0;
	if (nb < 0)
		{
			ft_putchar('-');
			nb = -nb;
		}
	if (nb == 0)
		{
			ft_putchar(48);
		}
	while (nb > 0)
		{
			array[i] = nb % 10;
			i++;
			nb /= 10;
		}
	while (i > 0)
		{
			i--;
			ft_putchar(array[i] + 48);
		}
}
