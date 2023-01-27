#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *lst;

	lst = malloc(sizeof(t_list));
	if (lst == NULL)
		return (NULL);
	lst->content = content;
	lst->next = NULL;
	return (lst);
}