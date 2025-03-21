
#include "print_ft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		if (n == -2147483648)
			ft_putstr_fd("-2147483648", fd);
		else
		{
			ft_putchar_fd('-', fd);
			n = -n;
		}
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		n = n % 10;
	}
	if (n < 10 && n >= 0)
		ft_putchar_fd((n + 48), fd);
}

void	ft_putnbr(int n)
{
	ft_putnbr_fd(n, 1);
}
