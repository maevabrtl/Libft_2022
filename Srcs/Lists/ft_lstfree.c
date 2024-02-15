/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfree.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabertha <mabertha@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 15:12:14 by mabertha          #+#    #+#             */
/*   Updated: 2024/02/15 15:12:15 by mabertha         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstfree(t_list **lst)
{
	t_list	*tmp;
	t_list	*current;

	current = *lst;
	while (current != NULL)
	{
		tmp = (current->next);
		free(current->content);
		free(current);
		current = tmp;
	}
	*lst = NULL;
}
