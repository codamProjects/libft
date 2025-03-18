
#include "str_ft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len_src;

	len_src = 0;
	while (src && src[len_src])
		len_src++;
	if ((!src || !*src) && dstsize != 0)
	{
		*dst = *src;
		return (len_src);
	}
	while (dstsize > 1 && src && *src)
	{
		*dst = *src;
		dstsize--;
		dst++;
		src++;
	}
	if (dstsize >= 1)
		*dst = '\0';
	return (len_src);
}
