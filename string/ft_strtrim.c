
#include "str_ft.h"

static int	begin(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (set && set[i])
	{
		if ((unsigned char) s1[j] == (unsigned char) set[i])
		{
			j++;
			i = -1;
		}
		i++;
	}
	return (j);
}

static int	end(char const *s1, char const *set)
{
	int	i;
	int	k;
	int	size;

	i = 0;
	k = 0;
	size = ft_strlen(s1) - 1;
	while (set && set[i])
	{
		if ((unsigned char) s1[size - k] == (unsigned char) set[i])
		{
			k++;
			i = -1;
		}
		i++;
	}
	return (k);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*am;
	int		numb;
	int		len;
	int		i;

	if (!s1)
		return (NULL);
	numb = begin(s1, set);
	if (numb < (int) ft_strlen(s1))
		len = (ft_strlen(s1) - end(s1, set));
	else
		len = ft_strlen(s1);
	i = 0;
	am = (char *)malloc((len - numb + 1) * sizeof(char));
	if (!am)
		return (NULL);
	while (numb + i < len)
	{
		am[i] = (char) s1[numb + i];
		i++;
	}
	am[i] = '\0';
	return (am);
}
