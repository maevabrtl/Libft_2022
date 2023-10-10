#include "libft.h"

t_list	*ft_lstnew(char *content)
{
	t_list *lst;

	lst = malloc(sizeof(t_list));
	if (lst == NULL)
		return (NULL);
	lst->content = ft_strndup(content, (int)ft_strlen(content) + 1);
	if (lst->content == NULL)
	{
		free(lst);
		return (NULL);
	}
	lst->next = NULL;
	return (lst);
}
