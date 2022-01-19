/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seyildiz <seyildiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 12:26:30 by seyildiz          #+#    #+#             */
/*   Updated: 2022/01/14 13:49:49 by seyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst -> next)
	{
		lst = lst->next->content;
	}
	return (lst);
}

/*int main()
{
	t_list *a;
	t_list *b;
	a = (t_list *)malloc(sizeof(t_list));
	a->next = (t_list *)malloc(sizeof(t_list));
	a->next->next = NULL;
	b=ft_lstlast(a);
	b->content = "semih";
	while (b)
	{
		printf("%s", b->content);
		b = b->next;
	}
}*/
