/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seyildiz <seyildiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 17:14:21 by seyildiz          #+#    #+#             */
/*   Updated: 2022/01/13 12:16:31 by seyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && n > 0)
	{
		if (s1[i] != s2[i])
		{
			break ;
		}
		i++;
		n--;
	}
	if (n == 0)
	{
		return (0);
	}
	return ((unsigned char)s1[i] - (unsigned char )s2[i]);
}

/*int main()
{
	char a[] = "semih";
	char b[] = "syp";
	int c = 2;
	printf("%d\n", ft_strncmp(a,b,c));
	printf("%d", strncmp(a,b,c));
}*/
