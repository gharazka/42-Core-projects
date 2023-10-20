/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gharazka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:54:51 by gharazka          #+#    #+#             */
/*   Updated: 2023/10/18 14:06:09 by gharazka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*full;
	int		i;
	int		j;

	full = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	i = 0;
	j = 0;
	while (s1[i] != 0)
	{
		full[i] = s1[i];
		i++;
	}
	while (s2[j] != 0)
	{
		full[i + j] = s2[j];
		j++;
	}
	full[i + j] = 0;
	return (full);
}
