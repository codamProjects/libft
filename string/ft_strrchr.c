
#include "str_ft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*d;

	d = NULL;
	while (s && *s)
	{
		if (*s == (char) c)
			d = (char *) s;
		s++;
	}
	if (s && *s == (char) c)
		return ((char *) s);
	return (d);
}
