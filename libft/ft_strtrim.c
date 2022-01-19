/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seyildiz <seyildiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 12:46:32 by seyildiz          #+#    #+#             */
/*   Updated: 2022/01/13 13:07:43 by seyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		count;
	int		i;
	int		len;
	char	*arr;

	count = 0;
	i = 0;
	if (s1)
	{
		len = ft_strlen(s1);
		while (s1[count] != '\0' && ft_strchr(set, s1[count]))
			count++;
		while (len > count && ft_strchr(set, s1[len - 1]))
			len--;
		arr = (char *)malloc(sizeof(char) * (len - count + 1));
		if (!arr)
			return (NULL);
		while (count < len)
			arr[i++] = s1[count++];
		arr[i] = '\0';
		return (arr);
	}
	return (0);
}
