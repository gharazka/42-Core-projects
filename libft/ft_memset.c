#include "libft.h"

void	*ft_memset(void *s, int c, t_size n)
{
	t_size	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
