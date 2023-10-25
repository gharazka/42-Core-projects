/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gharazka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 19:14:16 by gharazka          #+#    #+#             */
/*   Updated: 2023/10/24 19:14:58 by gharazka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, t_size len)
{
	t_size	i;
	int		j;

	i = 0;
	j = 0;
	if (little[0] == 0)
	{
		return ((char *)big);
	}
	while (big[i] != 0 && i < len)
	{
		while (big[i + j] == little[j] && i + j < len)
		{
			if (little[j + 1] == 0)
			{
				return ((char *)(&big[i]));
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}
