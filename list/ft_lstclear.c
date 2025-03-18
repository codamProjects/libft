
#include "list_ft.h"

void	ft_lstclear(t_list **lst, void (*del) (void *))
{
	t_list	*buf;

	while (*lst)
	{
		buf = *lst;
		*lst = (*lst)->next;
		del(buf->content);
		free(buf);
	}
	*lst = NULL;
}
