/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seyildiz <seyildiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 17:01:04 by seyildiz          #+#    #+#             */
/*   Updated: 2022/01/14 13:28:05 by seyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	count;
	char	*dest;

	count = 0;
	dest = (char *)s;
	while (n > 0)
	{
		dest[count] = 0;
		count++;
		n--;
	}
}

int main()
{
    int     count;
    char    str[] = "eyyyuphanm";
    count = 0;
    ft_bzero(str, 5);
    while (str[count] != 'm')
    {
        write(1, &str[count], 1);
        count++;
    }
}