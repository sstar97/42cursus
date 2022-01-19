/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seyildiz <seyildiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 17:07:05 by seyildiz          #+#    #+#             */
/*   Updated: 2022/01/13 17:22:57 by seyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			count;
	unsigned char	*str1;
	unsigned char	*str2;

	count = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (count < n)
	{
		if (str1[count] != str2[count])
		{
			return (str1[count] - str2[count]);
		}
		count++;
	}
	return (0);
}

/*int main()
{
	char a[] = "semih";
	char b[] = "syıldız";
	int c = 3;
	printf("%d", ft_memcmp(a,b,c));
	printf("%p", memcmp(a,b,c));

}*/
