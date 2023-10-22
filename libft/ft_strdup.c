#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		size;
	int		i;
	char	*dest;

	i = 0;
	size = ft_strlen(s);
	dest = (char *)malloc(size);
	while (s[i] != 0)
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}
