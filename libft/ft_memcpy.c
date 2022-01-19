/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seyildiz <seyildiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 17:07:51 by seyildiz          #+#    #+#             */
/*   Updated: 2022/01/13 12:25:55 by seyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	int					count;
	unsigned char		*dest;
	unsigned char		*sr;

	count = 0;
	if (!n || src == dst)
		return (dst);
	dest = (unsigned char *)dst;
	sr = (unsigned char *)src;
	while (n > 0)
	{
		dest[count] = sr[count];
		count++;
		n--;
	}
	return (dst);
}

/*int main()
{
	char a[] = "Semih";
	char b[] = "YILDIZ";
	printf("%s",ft_memcpy(a,b,3));
}*/
