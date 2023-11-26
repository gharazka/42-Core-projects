/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gharazka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 20:44:09 by gharazka          #+#    #+#             */
/*   Updated: 2023/11/16 20:44:27 by gharazka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunbr_fd(unsigned int nb, int fd)
{
	if (nb > 9)
	{
		ft_putunbr_fd(nb / 10, fd);
		ft_putunbr_fd(nb % 10, fd);
	}
	if (nb <= 9)
		ft_putchar_fd(nb + 48, fd);
}
