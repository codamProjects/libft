
#include "str_ft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*am;

	am = (char *)malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (am == 0)
		return (NULL);
	i = 0;
	while (s1 && s1[i])
	{
		am[i] = s1[i];
		i++;
	}
	if (s1 && s1[i] == '\0')
		am[i] = '\0';
	return (am);
}
