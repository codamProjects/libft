
#include "str_ft.h"

char	*ft_strchr(const char *s, int c)
{
	if (s)
	{
		while (*s)
		{
			if (*s == (char)c)
				return ((char *)s);
			s++;
		}
		if (!*s && (char)c == '\0')
			return ((char *)s);
	}
	return (NULL);
}
