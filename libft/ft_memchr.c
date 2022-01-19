/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seyildiz <seyildiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 17:06:33 by seyildiz          #+#    #+#             */
/*   Updated: 2022/01/13 17:22:28 by seyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	count;
	char	*s1;

	count = 0;
	s1 = (char *)str;
	while (count < n)
	{
		if (s1[count] == c)
		{
			return (&s1[count]);
		}
		count++;
	}
	return (0);
}

/*int main()
{
	char a[] = "semih";
	int b = 101;

	printf("%p\n", ft_memchr(a,b,3));
	printf("%p", memchr(a,b,3));
}*/
