
#include "str_ft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = ft_strlen(dst);
	k = ft_strlen(src);
	j = 0;
	while (src && src[j] && dstsize > i + j + 1)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (dstsize != 0 && dstsize >= i)
		dst[i + j] = '\0';
	if (dstsize == 0 || dstsize < i)
		return (k + dstsize);
	else
		return (k + i);
}
