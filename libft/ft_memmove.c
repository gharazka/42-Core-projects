/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gharazka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 19:06:52 by gharazka          #+#    #+#             */
/*   Updated: 2023/10/25 22:19:52 by gharazka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (n <= 0)
		return (dest);
	while (n > 0)
	{
		n--;
		((char *)dest)[n] = ((char *)src)[n];
	}
	((char *)dest)[n] = ((char *)src)[n];
	return (dest);
}
