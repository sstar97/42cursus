/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seyildiz <seyildiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 17:10:46 by seyildiz          #+#    #+#             */
/*   Updated: 2022/01/13 12:56:04 by seyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		count;
	int		i;
	char	*s1;

	count = 0;
	i = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	s1 = (char *)malloc(count + 1);
	if (s1 == NULL)
		return (NULL);
	while (i <= count)
	{
		s1[i] = str[i];
		i++;
	}
	return (s1);
}
