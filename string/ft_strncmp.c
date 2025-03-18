
#include "str_ft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	while (s1 && s2 && s1[i] && s2[i] && n > 0)
	{
		if (s1[i] != s2[i])
			return ((unsigned char) s1[i] - (unsigned char) s2[i]);
		n--;
		i++;
	}
	if (n > 0 && s1 && s2 && (!s1[i] || !s2[i]))
		return ((unsigned char) s1[i] - (unsigned char) s2[i]);
	if (!s1 && s2)
		return (-1);
	if (!s2 && s1)
		return (1);
	return (0);
}
