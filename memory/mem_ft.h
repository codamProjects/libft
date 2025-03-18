
#ifndef MEM_FT_H
# define MEM_FT_H

# include "../libft.h"
# include <stdlib.h>

void	*ft_calloc(size_t count, size_t size);
void	ft_bzero(void *s, size_t n);
void	*ft_memset(void *b, int c, size_t len);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	ft_free(void *ptr);
void	ft_free_ptr_array(void **ptr);
size_t	ft_ptr_array_lenght(void **ptr);

#endif
