
#ifndef GNL_FT_H
# define GNL_FT_H

# include "../libft.h"
# include <stdlib.h>
# include <limits.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# ifndef OPEN_MAX
#  define OPEN_MAX 42
# endif

char	*get_next_line(int fd);
int		ft_gnl_strchr(char *str);
char	*ft_gnl_strjoin(char *line, char *buf);
char	*ft_line_return(char *line);
char	*ft_new_line(char *line);

#endif
