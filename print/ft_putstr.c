
#include "print_ft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s && s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}

void	ft_putstr(char *s)
{
	ft_putstr_fd(s, 1);
}
