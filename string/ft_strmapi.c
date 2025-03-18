
#include "str_ft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*am;

	am = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (am == NULL)
		return (NULL);
	i = 0;
	while (s && s[i])
	{
		am[i] = f(i, s[i]);
		i++;
	}
	am[i] = '\0';
	return (am);
}
