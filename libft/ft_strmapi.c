/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seyildiz <seyildiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 16:06:28 by seyildiz          #+#    #+#             */
/*   Updated: 2022/01/13 13:10:00 by seyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t		count;
	char		*arr;

	count = 0;
	if (s)
	{
		arr = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
		if (!arr)
			return (NULL);
		while (count < ft_strlen(s))
		{
			arr[count] = f(count, s[count]);
			count++;
		}
		arr[count] = '\0';
		return (arr);
	}
	return (0);
}
