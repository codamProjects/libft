
#include "char_ft.h"

int	ft_whitespace(int c)
{
	if (c == 32 || (c >= 8 && c <= 13))
		return (1);
	return (0);
}
