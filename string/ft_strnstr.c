
#include "str_ft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	ih;
	size_t	in;

	ih = 0;
	if (!needle || !needle[0])
		return ((char *)haystack);
	while (haystack && haystack[ih] && len > 0)
	{
		in = 0;
		while (haystack[in + ih] == needle[in] && len > in)
		{
			if (!needle[in + 1])
				return ((char *)&haystack[ih]);
			in++;
		}
		ih++;
		len--;
	}
	return (NULL);
}
