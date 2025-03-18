
#include "mem_ft.h"

void	ft_free_ptr_array(void **ptr)
{
	size_t	i;

	if (ptr)
	{
		i = 0;
		while (ptr[i])
		{
			free(ptr[i]);
			i++;
		}
		free(ptr);
	}
}
