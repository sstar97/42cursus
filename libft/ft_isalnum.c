/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seyildiz <seyildiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 17:04:06 by seyildiz          #+#    #+#             */
/*   Updated: 2022/01/05 17:04:08 by seyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int var)
{
	if ((var >= 48 && var <= 57) || (var >= 65 && var <= 90)
		|| (var >= 97 && var <= 122))
	{
		return (1);
	}
	return (0);
}
