/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seyildiz <seyildiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 17:16:04 by seyildiz          #+#    #+#             */
/*   Updated: 2022/01/07 14:09:15 by seyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	count;

	count = 0;
	count = ft_strlen(str);
	if (c == '\0')
	{
		return ((char *)&str[count]);
	}
	count--;
	while (count >= 0)
	{
		if (str[count] == c)
		{
			return ((char *)&str[count]);
		}
		count--;
	}
	return (NULL);
}

/*int main()
{
	char a[] = "semih";
	printf("%s", ft_strrchr(a,'e'));
}*/
