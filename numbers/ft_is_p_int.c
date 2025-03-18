
#include "num_ft.h"

int	ft_is_p_int(char *str)
{
	int	i;

	i = 0;
	while (str && ft_isdigit(str[i]) == 1)
		i++;
	if (i != (int) ft_strlen(str))
		return (0);
	else
		return (1);
}
