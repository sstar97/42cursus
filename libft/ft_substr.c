/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seyildiz <seyildiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 17:17:08 by seyildiz          #+#    #+#             */
/*   Updated: 2022/01/13 13:05:10 by seyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	count;
	char	*arr;

	count = 0;
	if (s)
	{
		arr = (char *)malloc(sizeof(char) * (len + 1));
		if (arr == NULL)
		{
			return (NULL);
		}
		while (start < ft_strlen(s) && count < len)
		{
			arr[count] = s[start];
			start++;
			count++;
		}
		arr[count] = '\0';
		return (arr);
	}
	return (0);
}

/*int main()
{
	char a[] = "semih yıldız";
	int st = 3;
	size_t l = 5;
	printf("%s", ft_substr(a,st,l));
}*/
