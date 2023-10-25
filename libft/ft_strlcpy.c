#include "libft.h"

t_size	ft_strlcpy(char *dst, const char *src, t_size dstsize)
{
	t_size	i;

	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while(src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (ft_strlen(src));
}
