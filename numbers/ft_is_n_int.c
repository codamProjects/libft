
#include "num_ft.h"

int	ft_is_n_int(char *str)
{
	if (!str || str[0] != '-')
		return (0);
	else
		str++;
	return (ft_is_p_int(str));
}
