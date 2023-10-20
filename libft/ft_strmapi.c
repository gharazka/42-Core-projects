/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gharazka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 21:50:02 by gharazka          #+#    #+#             */
/*   Updated: 2023/10/19 22:01:14 by gharazka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*mod_str;

	i = 0;
	mod_str = (char *)malloc(ft_strlen(s) + 1);
	if (!mod_str)
		return (NULL);
	while (s[i])
	{
		mod_str[i] = f(i, s[i]);
		i++;
	}
	return (mod_str);
}