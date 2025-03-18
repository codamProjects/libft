
#include "gnl_ft.h"
#include <sys/types.h>

static char	*ft_free_set_null(char *line)
{
	if (line)
		free(line);
	line = NULL;
	return (NULL);
}

static char	*ft_read_short(int fd, char *line)
{
	ssize_t	rd;
	char	buf[BUFFER_SIZE + 1];

	while (!ft_gnl_strchr(line))
	{
		rd = read(fd, buf, BUFFER_SIZE);
		if (rd == -1)
			return (ft_free_set_null(line));
		if (rd == 0)
			break ;
		buf[rd] = '\0';
		line = ft_gnl_strjoin(line, buf);
	}
	return (line);
}

static char	*ft_read_large(int fd, char *line)
{
	ssize_t	rd;
	char	*buf;

	while (!ft_gnl_strchr(line))
	{
		buf = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
		if (!buf)
			return (ft_free_set_null(line));
		rd = read(fd, buf, BUFFER_SIZE);
		if (rd > 0)
		{
			buf[rd] = '\0';
			line = ft_gnl_strjoin(line, buf);
		}
		free(buf);
		if (rd == -1)
			return (ft_free_set_null(line));
		if (rd == 0)
			break ;
	}
	return (line);
}

char	*get_next_line(int fd)
{
	static char	*line[OPEN_MAX];
	char		*return_line;

	if (fd < 0 || BUFFER_SIZE < 1)
		return (NULL);
	if (BUFFER_SIZE < 10000000)
		line[fd] = ft_read_short(fd, line[fd]);
	else
		line[fd] = ft_read_large(fd, line[fd]);
	return_line = ft_line_return(line[fd]);
	if (return_line)
	{
		line[fd] = ft_new_line(line[fd]);
		return (return_line);
	}
	return (ft_free_set_null(line[fd]));
}
