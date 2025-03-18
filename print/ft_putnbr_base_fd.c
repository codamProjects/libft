
#include "print_ft.h"

//needs fixing, not a smooth way to do it.
void	ft_putnbr_base_fd(size_t num, char *bset, size_t base, int fd)
{
	if (num >= base)
	{
		ft_putnbr_base_fd(num / base, bset, base, fd);
		num = num % base;
	}
	if (num < base)
		ft_putchar_fd(bset[num], fd);
}
