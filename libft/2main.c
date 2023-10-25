#include "libft.h"

int	main(void)
{
	char	*dest;

	dest = (char *)malloc(15);
	ft_memset(dest, 'r', 15);
	printf("%li\n", ft_strlcpy(dest, "lorem", 15));
	printf("%s\n", dest);
	ft_memset(dest, 'r', 15);
	printf("%li\n", ft_strlcpy(dest, "", 15));
	write(1, dest, 15);
	ft_memset(dest, 'r', 15);
	printf("%li\n", ft_strlcpy(dest, "lorem ipsum", 3));
	printf("%s\n", dest);
	ft_memset(dest, 'r', 15);
	printf("%li\n", ft_strlcpy(dest, "lorem ipsum dolor sit amet", 15));
	printf("%s\n", dest);
	ft_memset(dest, 'r', 15);
	printf("%li\n", ft_strlcpy(dest, "lorem ipsum dolor sit amet", 0));
	printf("%s\n", dest);
}
