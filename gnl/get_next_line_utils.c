
#include "gnl_ft.h"

static char	*ft_free_return_null(char *line)
{
	if (line)
		free(line);
	return (NULL);
}

char	*ft_gnl_strjoin(char *line, char *buf)
{
	char	*new_line;
	int		i;
	int		k;

	if (!buf)
		return (ft_free_return_null(line));
	i = 0;
	while (buf[i])
		i++;
	k = 0;
	while (line && line[k])
		k++;
	new_line = (char *) malloc((i + k + 1) * sizeof(char));
	if (!new_line)
		return (ft_free_return_null(line));
	i = 0;
	k = 0;
	while (line && line[i])
		new_line[k++] = line[i++];
	i = 0;
	while (buf[i])
		new_line[k++] = buf[i++];
	new_line[k] = '\0';
	free(line);
	return (new_line);
}

int	ft_gnl_strchr(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		if (str[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

char	*ft_line_return(char *line)
{
	int		i;
	int		j;
	char	*return_line;

	if (!line)
		return (NULL);
	i = 0;
	while (line[i] != '\n' && line[i])
		i++;
	j = i;
	if (line[i] == '\n')
		j = i + 1;
	return_line = (char *) malloc((j + 1) * sizeof(char));
	if (!return_line)
		return (NULL);
	j = 0;
	while (j < i)
	{
		return_line[j] = line[j];
		j++;
	}
	if (line[j] == '\n')
		return_line[j++] = '\n';
	return_line[j] = '\0';
	return (return_line);
}

char	*ft_new_line(char *line)
{
	int		i;
	int		j;
	char	*new_line;

	if (!line)
		return (ft_free_return_null(line));
	i = 0;
	while (line[i] != '\n' && line[i])
		i++;
	if (!line[i] || (line[i] == '\n' && !line[i + 1]))
		return (ft_free_return_null(line));
	j = 0;
	while (line[i + j])
		j++;
	new_line = (char *) malloc((j + 1) * sizeof(char));
	if (!new_line)
		return (ft_free_return_null(line));
	j = 0;
	i++;
	while (line[i])
		new_line[j++] = line[i++];
	new_line[j] = '\0';
	free(line);
	return (new_line);
}
