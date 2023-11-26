/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gharazka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 20:48:11 by gharazka          #+#    #+#             */
/*   Updated: 2023/11/16 20:48:12 by gharazka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexlen(unsigned long long int n, unsigned long int temp, int len)
{
	while (n >= 16)
	{
		temp = n / 16;
		n = n - (16 * temp);
	}
	len++;
	if (temp > 0)
		len = ft_hexlen(temp, 0, len);
	return (len);
}
