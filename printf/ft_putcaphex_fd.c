/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putcaphex_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gharazka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 20:49:10 by gharazka          #+#    #+#             */
/*   Updated: 2023/11/16 20:49:11 by gharazka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putcaphex_fd(unsigned int n, int temp)
{
	while (n >= 16)
	{
		temp = n / 16;
		n = n - (16 * temp);
	}
	if (temp > 0)
		ft_putcaphex_fd(temp, 0);
	if (n <= 9)
		ft_putnbr_fd(n, 1);
	if (n > 9)
		ft_putchar_fd(n + '7', 1);
}
