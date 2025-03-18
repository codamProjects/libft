
#include "str_ft.h"

int	ft_word_count(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (!str)
		return (0);
	while (str[i] && str[i] == 32)
		i++;
	while (str[i])
	{
		i++;
		if ((str[i] == 32 || !str[i]) && str[i - 1] != 32)
			count++;
	}
	return (count);
}