/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seyildiz <seyildiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 13:10:35 by seyildiz          #+#    #+#             */
/*   Updated: 2022/01/13 15:04:36 by seyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_cpy(char *dst, const char *src, int count, int c1)
{
	int	count1;

	count1 = 0;
	while (c1 > 0)
	{
		dst[count1] = src[count - c1];
		count1++;
		c1--;
	}
	dst[count1] = '\0';
	return (dst);
}

static int	ft_wcounter(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[count] != '\0')
	{
		if (s[count] == c)
		{
			count++;
		}
		else
		{
			i++;
			while (s[count] && s[count] != c)
				count++;
		}
	}
	return (i);
}

static void	*spl(char **arr, const char *s, char c, int i)
{
	int	a;
	int	count;
	int	c1;

	a = 0;
	count = 0;
	c1 = 0;
	while (a < i)
	{
		while (s[count] != '\0' && s[count] == c)
			count++;
		while (s[count] != '\0' && s[count] != c)
		{
			c1++;
			count++;
		}
		arr[a] = (char *)malloc(sizeof(char) * (c1 + 1));
		ft_cpy(arr[a], s, count, c1);
		a++;
		c1 = 0;
	}
	arr[a] = NULL;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**arr;

	if (s)
	{
		i = ft_wcounter(s, c);
		arr = (char **)malloc(sizeof(char *) * (i + 1));
		if (!arr)
			return (NULL);
		spl(arr, s, c, i);
		return (arr);
	}
	return (0);
}

/*int main()
{
	char a[] = "eyup burak coskun";
	char b = ' ';
	char **c = ft_split(a,b);
	for (int i = 0; i<3; i++)
		printf("%s\n", c[i]);
}*/
