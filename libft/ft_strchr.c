/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seyildiz <seyildiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 17:09:48 by seyildiz          #+#    #+#             */
/*   Updated: 2022/01/07 14:02:41 by seyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	count;

	count = 0;
	while (str[count] != c)
	{
		if (str[count] == '\0')
		{
			return (NULL);
		}
		count++;
	}
	return ((char *)&str[count]);
}

/*int main()
{
	char a[] = "semih";
	printf("%s", ft_strchr(a,'e'));
}*/
