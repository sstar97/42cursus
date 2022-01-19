/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seyildiz <seyildiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 17:12:31 by seyildiz          #+#    #+#             */
/*   Updated: 2022/01/13 17:19:49 by seyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src,
						size_t dstsize)
{
	size_t	src_c;
	size_t	dst_c;
	int		count;

	src_c = ft_strlen(src);
	dst_c = ft_strlen(dst);
	if (dst_c >= dstsize)
	{
		return (src_c + dstsize);
	}
	count = 0;
	while (src[count] && dst_c + count + 1 < dstsize)
	{
		dst[dst_c + count] = src[count];
		count++;
	}
	dst[dst_c + count] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[count]));
}

/*int main()
{
	char a[] = "Semih";
	char b[] = "YILDIZ";
	printf("%u\n", ft_strlcat(a,b,30));
}*/
