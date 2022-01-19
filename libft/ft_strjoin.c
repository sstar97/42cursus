/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seyildiz <seyildiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 17:11:03 by seyildiz          #+#    #+#             */
/*   Updated: 2022/01/13 15:05:05 by seyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		a;
	char	*array;
	size_t	len;

	a = 0;
	i = 0;
	if (s1)
	{
		len = ft_strlen(s1) + ft_strlen(s2) + 1;
		array = (char *)malloc(sizeof(char) * (len));
		if (array == NULL)
			return (NULL);
		while (s1[i] != '\0')
			array[a++] = s1[i++];
		i = 0;
		while (s2[i] != '\0')
		{
			array[a++] = s2[i++];
		}
		array[a] = '\0';
		return (array);
	}
	return (0);
}
