/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seyildiz <seyildiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 17:04:40 by seyildiz          #+#    #+#             */
/*   Updated: 2022/01/05 17:04:42 by seyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int str)
{			
	if ((str >= 65 && str <= 90) || (str >= 97 && str <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/*int main()
{
	char a;
	a='a';
	printf("%d",ft_isalpha(a));
}*/