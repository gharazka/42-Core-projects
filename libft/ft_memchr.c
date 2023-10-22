#include "libft.h"

void	*ft_memchr(const void *s, int c, t_size n)
{
	t_size	i;

	i = 0;
	while(((unsigned char *)s)[i] && i < n)
	{
		if (((unsigned char *)s)[i] == c)
			return ((void *)&((char *)s)[i]);
		i++;
	}
	return (NULL);
}
