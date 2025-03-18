
#include "libft.h"

int	ft_is_hex(char	*str)
{
	int		i;
	int		ih;
	char	*hex;

	i = 0;
	hex = "0123456789abcdefABCDEF";
	if (!str)
		return (0);
	if (str[0] == '0' && str[1] == 'x')
		i += 2;
	while (str[i])
	{
		ih = 0;
		while (hex[ih])
		{
			if (str[i] == hex[ih])
				break ;
			ih++;
		}
		if (!hex[ih])
			return (0);
		i++;
	}
	return (1);
}
