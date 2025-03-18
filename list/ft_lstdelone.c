
#include "list_ft.h"

void	ft_lstdelone(t_list *lst, void (*del) (void *))
{
	del(lst->content);
	free(lst);
}
