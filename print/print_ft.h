
#ifndef PRINT_FT_H
# define PRINT_FT_H

# include "../libft.h"
# include <unistd.h>

//put_fd
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putnbr_base_fd(size_t num, char *bset, size_t base, int fd);

//printf
int		ft_printf(const char *format, ...);
int		ft_putchar(char c);
int		ft_putstr(char *str);
void	ft_putbnum(size_t num, char *bset, size_t base);
int		ft_count(size_t num, size_t base);

#endif