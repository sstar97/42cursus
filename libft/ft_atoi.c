/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seyildiz <seyildiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 17:01:49 by seyildiz          #+#    #+#             */
/*   Updated: 2022/01/13 13:48:28 by seyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int			index;
	long int	sayi;
	int			isaret;

	index = 0;
	sayi = 0;
	isaret = 1;
	while ((str[index] >= '\t' && str[index] <= '\r') || str[index] == ' ')
		index++;
	if (str[index] == '-' || str[index] == '+')
	{
		if (str[index] == '-')
			isaret = isaret * -1;
		index++;
	}
	while (str[index] >= '0' && str[index] <= '9')
	{
		sayi = (sayi * 10) + str[index] - '0';
		index++;
		if (sayi * isaret > 2147483647)
			return (-1);
		if (sayi * isaret < -2147483648)
			return (0);
	}
	return (sayi * isaret);
}

/*int main()
{
	char a[] = "   3 4321";
	printf("%d\n", ft_atoi(a));
	printf("%d", atoi(a));
}*/
