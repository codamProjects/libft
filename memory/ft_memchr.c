
#include "mem_ft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*d;
	size_t			i;

	d = (unsigned char *)s;
	i = 0;
	while (i < n && d[i])
	{
		if (d[i] == (unsigned char)c)
			return ((void *)s);
		i++;
		s++;
	}
	if (i < n && d[i] == (unsigned char)c)
		return ((void *)s);
	return (NULL);
}
