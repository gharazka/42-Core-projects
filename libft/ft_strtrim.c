#include "libft.h"

static int	check_set(char c, char const *set)
{
	int	i;

	i = 0;
	while(set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static int strlen_noset(char const *s1, char const *set)
{
	int	i;
	int	len;

	i = 0;
	while(s1[i])
	{
		if (!(check_set(s1[i], set)))
			len++;
		i++;
	}
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	j;
	char	*result;

	result = (char *)malloc(sizeof(char) * (strlen_noset(s1, set) + 1));
	if (!result)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		if (!(check_set(s1[i], set)))
		{
			result[j] = s1[i];
			j++;
		}	
		i++;
	}
	return (result);
}
