#include "libft.h"

void	ft_lstfree(t_list **lst)
{
	t_list	*tmp;

	while (*lst != NULL)
	{
		tmp = ((*lst)->next);
		free((*lst)->content);
		free((*lst)->next);
		free(*lst);
		*lst = tmp;
	}
	free(lst);
}
