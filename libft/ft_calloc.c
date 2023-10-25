/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gharazka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 19:26:23 by gharazka          #+#    #+#             */
/*   Updated: 2023/10/24 19:36:34 by gharazka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(t_size nmemb, t_size size)
{
	void	*result_ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	result_ptr = malloc(size * nmemb);
	if (!result_ptr)
		return (NULL);
	result_ptr = ft_bzero(result_ptr, nmemb);
	return (result_ptr);
}
