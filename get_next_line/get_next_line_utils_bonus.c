/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seyildiz <seyildiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 14:46:14 by seyildiz          #+#    #+#             */
/*   Updated: 2022/01/31 18:23:12 by seyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

int	ft_strlen(char *s)
{
	int	len;

	len = 0;
	if (!s)
		return (0);
	while (s[len] != '\0')
		len++;
	return (len);
}

char	*ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	if (c == '\0')
		return ((char *)&s[ft_strlen(s)]);
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	return (0);
}

char	*next_line(char *buff)
{
	char	*next;
	int		count;
	int		i;

	count = 0;
	i = 0;
	while (buff[count] && buff[count++] != '\n')
		continue ;
	if (!buff || ft_strlen(buff) - count == 0)
		return (ft_free(buff));
	next = (char *)malloc(sizeof(char) * (ft_strlen(buff) - count + 1));
	if (!next)
		return (NULL);
	while (buff[count] != '\0')
		next[i++] = buff[count++];
	next[i] = '\0';
	free(buff);
	return (next);
}

char	*get_line(char *buff)
{
	int		count;
	char	*line;

	count = 0;
	if (!buff)
		return (ft_free(buff));
	while (buff[count] && buff[count] != '\n')
		count++;
	line = (char *)malloc(sizeof(char) * (count + 2));
	if (!line)
		return (NULL);
	count = 0;
	while (buff[count] && buff[count] != '\n')
	{
		line[count] = buff[count];
		count++;
	}
	if (buff[count] == '\n')
	{
		line[count] = buff[count];
		count++;
	}
	line[count] = '\0';
	return (line);
}

char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	int		count;
	char	*arr;

	i = 0;
	count = 0;
	arr = (char *)malloc(sizeof(char) * ((ft_strlen(s1) + ft_strlen(s2)) + 1));
	if (arr == NULL)
		return (0);
	while (s1 && s1[i] != '\0')
	{
		arr[i] = s1[i];
		i++;
	}
	free (s1);
	while (s2 && s2[count] != '\0')
		arr[i++] = s2[count++];
	arr[i] = '\0';
	return (arr);
}
