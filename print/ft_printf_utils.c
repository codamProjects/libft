
#include "print_ft.h"

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
		return (ft_putstr("(null)"));
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	return (i);
}

int	ft_count(size_t num, size_t base)
{
	int	j;

	j = 0;
	if (num == 0)
		return (1);
	while (num > 0)
	{
		num = num / base;
		j++;
	}
	return (j);
}

void	ft_putbnum(size_t num, char *bset, size_t base)
{
	if (num >= base)
	{
		ft_putbnum(num / base, bset, base);
		num = num % base;
	}
	if (num < base)
		ft_putchar(bset[num]);
}
