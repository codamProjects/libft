
#include "list_ft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*buf;

	buf = *lst;
	if (*lst == NULL)
		*lst = new;
	else
	{
		while (buf->next != NULL)
			buf = buf->next;
		buf->next = new;
	}
}
