/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seyildiz <seyildiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 17:57:25 by seyildiz          #+#    #+#             */
/*   Updated: 2022/02/02 14:43:50 by seyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_free(char *str)
{
	free(str);
	return (NULL);
}

char	*read_save(int fd, char *buff)
{
	char	*line;
	int		read_byte;

	line = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!line)
		return (NULL);
	read_byte = 1;
	while (!ft_strchr(buff, '\n') && read_byte != 0)
	{
		read_byte = read(fd, line, BUFFER_SIZE);
		if (read_byte <= 0)
		{
			break ;
		}
		line[read_byte] = '\0';
		buff = ft_strjoin(buff, line);
	}
	free(line);
	return (buff);
}

char	*get_next_line(int fd)
{
	static char	*buff;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	buff = read_save(fd, buff);
	if (!buff)
		return (NULL);
	line = get_line(buff);
	buff = next_line(buff);
	return (line);
}

/* int	main(void)
{
	char *line;
	int fd;
	int count;

	count = 3;
	fd = open("test1", O_RDONLY);
	line = get_next_line(fd);
	printf("%s", line);
} */
