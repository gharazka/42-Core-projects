#include "libft.h"

void	*ft_bzero(void *s, t_size n)
{
	s = ft_memset(s, 0, n);
	return (s);
}
