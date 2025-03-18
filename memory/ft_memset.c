
#include "mem_ft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*d;

	d = b;
	i = 0;
	while (i < len)
	{
		d[i] = (unsigned char)c;
		i++;
	}
	return (d);
}
