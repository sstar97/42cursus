/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seyildiz <seyildiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 17:08:32 by seyildiz          #+#    #+#             */
/*   Updated: 2022/01/05 17:08:56 by seyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, int len)
{
	int				count;
	unsigned char	*a;

	a = (unsigned char *)str;
	count = 0;
	while (count < len)
	{
		a[count] = c;
		count++;
	}
	return (str);
}

/*int main ()
{
	char dest[] = "Semih Yıldız";
	printf("%s", ft_memset(dest,'a',3));
}*/
