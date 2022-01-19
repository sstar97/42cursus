/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seyildiz <seyildiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 17:08:03 by seyildiz          #+#    #+#             */
/*   Updated: 2022/01/07 13:54:01 by seyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	int	count;

	count = 0;
	if (!dst && !src)
	{
		return (0);
	}
	if ((size_t) dst - (size_t) src < n)
	{
		count = n - 1;
		while (count >= 0)
		{
			((char *)dst)[count] = ((const char *)src)[count];
			count--;
		}
	}
	else
	{
		while ((size_t)count < n)
		{
			((char *)dst)[count] = ((const char *)src)[count];
			count++;
		}
	}
	return (dst);
}
