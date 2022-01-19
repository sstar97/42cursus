/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seyildiz <seyildiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 17:14:10 by seyildiz          #+#    #+#             */
/*   Updated: 2022/01/08 12:29:28 by seyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	count;

	count = 0;
	if (str[count] != '\0')
	{
		while (str[count] != '\0')
		{
			count++;
		}
	}
	return (count);
}

/*int main()
{
	char a[] = "adam";
	printf("%d",ft_strlen(a));
}
*/
