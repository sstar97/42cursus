/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seyildiz <seyildiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 14:45:56 by seyildiz          #+#    #+#             */
/*   Updated: 2022/01/31 18:21:16 by seyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

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
	static char	*buff[10240];
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	buff[fd] = read_save(fd, buff[fd]);
	if (!buff[fd])
		return (NULL);
	line = get_line(buff[fd]);
	buff[fd] = next_line(buff[fd]);
	return (line);
}
/* 
int	main(void)
{
	char	*line;
	int		i;
	int		fd1;

	fd1 = open("test.txt", O_RDONLY);
	i = 1;
	line = get_next_line(fd1);
	printf("line [%d]: %s", i, line);
	free(line);

	line = get_next_line(fd1);
	printf("line [%d]: %s", i, line);
	free(line);


	close(fd1);
	system("leaks a.out");
	return (0);
} */