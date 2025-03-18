
#include "mem_ft.h"

size_t	ft_ptr_array_length(void **ptr)
{
	size_t	i;

	i = 0;
	while (ptr && ptr[i])
		i++;
	return (i);
}
