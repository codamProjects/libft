
#ifndef PRINT_FT_H
# define PRINT_FT_H

# include "../libft.h"
# include <unistd.h>

void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putnbr_base(size_t num, char *bset, size_t base);
void	ft_putchar(char c);
void	ft_putstr(char *s);
void	ft_putendl(char *s);
void	ft_putnbr(int n);
void	ft_putnbr_base(size_t num, char *bset, size_t base);

//printf
int		ft_printf(const char *format, ...);
int		ft_printchar(char c);
int		ft_printstr(char *str);
void	ft_printbnum(size_t num, char *bset, size_t base);
int		ft_count(size_t num, size_t base);

#endif