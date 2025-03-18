
#include "mem_ft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*d;
	const char	*s;
	size_t		i;

	d = (char *) dst;
	s = (const char *) src;
	if (!dst && !src)
		return (NULL);
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}
