/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gharazka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:33:16 by gharazka          #+#    #+#             */
/*   Updated: 2023/10/24 15:52:51 by gharazka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ptr_c;

	i = 0;
	ptr_c = NULL;
	while (s[i])
	{
		if (s[i] == c)
			ptr_c = (char *)&s[i];
		i++;
	}
	if (s[i] == c)
		ptr_c = (char *)&s[i];
	if (ptr_c != NULL)
		return (ptr_c);
	else
		return (0);
}
