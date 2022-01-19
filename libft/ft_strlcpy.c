/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seyildiz <seyildiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 17:13:34 by seyildiz          #+#    #+#             */
/*   Updated: 2022/01/13 12:53:46 by seyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst,
							const char *src, size_t dstsize)
{
	size_t	count;

	count = ft_strlen(src);
	if (!dst || !src)
		return (0);
	count = 0;
	if (dstsize)
	{
		while ((0 < dstsize - 1) && (src[count] != '\0'))
		{
			dst[count] = src[count];
			count++;
			dstsize--;
		}
		dst[count] = '\0';
	}
	return (ft_strlen(src));
}

/*int main()
{
	char a[] = "Semih";
	char b[] = "YILDIZ";
	printf("%zu", ft_strlcpy(((void *)0), ((void *)0), 10));
}*/
