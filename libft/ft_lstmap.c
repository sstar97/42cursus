/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seyildiz <seyildiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 12:57:00 by seyildiz          #+#    #+#             */
/*   Updated: 2022/01/13 13:30:35 by seyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node;

	if (!lst || !f)
		return (NULL);
	node = ft_lstnew(f(lst->content));
	if (!node)
	{
		del(&(lst->content));
		node = ft_lstmap(lst->next, f, del);
	}
	else
		node->next = ft_lstmap(lst->next, f, del);
	return (node);
}
