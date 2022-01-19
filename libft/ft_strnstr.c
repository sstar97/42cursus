/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seyildiz <seyildiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 17:15:03 by seyildiz          #+#    #+#             */
/*   Updated: 2022/01/07 18:41:03 by seyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, unsigned int len)
{
	unsigned int	count;
	unsigned int	i;

	count = 0;
	i = 0;
	if (needle[count] == '\0')
	{
		return ((char *)haystack);
	}
	while (haystack[count] && count < len)
	{
		i = 0;
		while (needle[i] && haystack[count + i] == needle[i]
			&& (count + i) < len)
		{
			i++;
		}
		if (needle[i] == '\0')
		{
			return ((char *)(haystack + count));
		}
		count++;
	}
	return (NULL);
}

/*int main()
{
	char a[] = "semih";
	char b[] = "mih";
	int c = 5;

	printf("%s\n", ft_strnstr(a,b,c));
	printf("%s", strnstr(a,b,c));
}*/
