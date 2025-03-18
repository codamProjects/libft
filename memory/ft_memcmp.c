
#include "mem_ft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*d1;
	const char	*d2;
	size_t		i;

	d1 = (const char *) s1;
	d2 = (const char *) s2;
	i = 0;
	while (i < n)
	{
		if (d1[i] != d2[i])
			return ((unsigned char)d1[i] - (unsigned char)d2[i]);
		i++;
	}
	return (0);
}
