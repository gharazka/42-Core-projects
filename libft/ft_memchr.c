/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gharazka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 19:16:54 by gharazka          #+#    #+#             */
/*   Updated: 2023/10/24 19:17:09 by gharazka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, t_size n)
{
	t_size	i;

	i = 0;
	while (((unsigned char *)s)[i] && i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((void *)&((char *)s)[i]);
		i++;
	}
	return (NULL);
}
