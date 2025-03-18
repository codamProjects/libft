
#include "num_ft.h"

//incorrect
int	ft_is_int(char *str)
{
	int	i;
	int	len;

	i = 0;
	if (!str)
		return (0);
	if (ft_is_n_int(str) == 0 && ft_is_p_int(str) == 0)
		return (0);
	if (str[0] == '-')
		i++;
	while (str[i] == '0')
		i++;
	len = ft_strlen(&str[i]);
	if (len > 10)
		return (0);
	else if (len == 10)
	{
		if (str[0] == '-' && ft_strncmp("2147483648", &str[i], len + 1) < 0)
			return (0);
		if (str[0] != '-' && ft_strncmp("2147483647", &str[i], len + 1) < 0)
			return (0);
	}
	return (1);
}
