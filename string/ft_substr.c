
#include "str_ft.h"

static size_t	amsize(char const *s, unsigned int start, size_t len)
{
	size_t	i;

	i = 0;
	if (ft_strlen(s) == 0 || len == 0 || ft_strlen(s) < start)
		return (0);
	while (s[start + i] && len != i)
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	if (!s)
		return (NULL);
	sub = (char *)malloc((amsize(s, start, len) + 1) * sizeof(char));
	if (!sub)
		return (NULL);
	i = 0;
	if (start >= ft_strlen(s))
	{
		sub[i] = '\0';
		return (sub);
	}
	while (s[start + i] && len - i != 0)
	{
		sub[i] = s[start + i];
		i++;
	}	
	if (!s[start + i] || len - i == 0)
		sub[i] = '\0';
	return (sub);
}
