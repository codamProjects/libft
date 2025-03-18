
#include "list_ft.h"

static void	*mfree(t_list **lst, void (*del) (void *))
{
	t_list	*buf;

	while (*lst)
	{
		buf = *lst;
		*lst = (*lst)->next;
		del(buf->content);
		free(buf);
	}
	return (NULL);
}

t_list	*ft_lstmap(t_list *lst, void *(*f) (void *), void (*del) (void *))
{
	t_list	*newlist;
	t_list	*head;

	if (!lst)
		return (NULL);
	newlist = (t_list *)malloc(sizeof(t_list));
	if (!newlist)
		return (NULL);
	newlist->content = f(lst->content);
	head = newlist;
	lst = lst->next;
	while (lst)
	{
		newlist->next = (t_list *)malloc(sizeof(t_list));
		if (!newlist->next)
			return (mfree(&head, del));
		newlist->next->content = f(lst->content);
		newlist = newlist->next;
		lst = lst->next;
	}
	newlist->next = NULL;
	return (head);
}
