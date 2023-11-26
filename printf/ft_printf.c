/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gharazka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 20:40:54 by gharazka          #+#    #+#             */
/*   Updated: 2023/11/16 21:11:24 by gharazka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_sign_two(char c, va_list args, va_list copy)
{
	int	len;

	len = 0;
	if (c == 'x')
	{
		ft_puthex_fd(va_arg(args, unsigned int), 0);
		len += ft_hexlen(va_arg(copy, unsigned int), 0, 0);
	}
	else if (c == 'p')
	{
		len += ft_putmemory_fd(va_arg(args, unsigned long long int));
	}
	else if (c == 'X')
	{
		ft_putcaphex_fd(va_arg(args, unsigned int), 0);
		len += ft_hexlen(va_arg(copy, unsigned int), 0, 0);
	}
	else if (c == '%')
	{
		ft_putchar_fd(c, 1);
		len += 1;
	}
	return (len);
}

int	check_sign_one(char c, va_list args)
{
	int		len;
	va_list	copy;
	va_list	copy2;

	va_copy(copy, args);
	va_copy(copy2, args);
	len = 0;
	if (c == 'c')
	{
		ft_putchar_fd(va_arg(args, int), 1);
		len += 1;
	}
	else if (c == 's')
	{
		ft_putstr_fd(va_arg(args, char *), 1);
		len += ft_strlen(va_arg(copy, char *));
	}
	else if (c == 'i' || c == 'd')
	{
		ft_putnbr_fd(va_arg(args, int), 1);
		len += ft_numlen(va_arg(copy, int));
	}
	else if (c == 'u')
	{
		ft_putunbr_fd(va_arg(args, unsigned int), 1);
		len += ft_unumlen(va_arg(copy, unsigned int));
	}
	else
		check_sign_two(c, args, copy);
	return (len);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			len += check_sign_one(str[i + 1], args);
			i += 2;
		}
		else
		{
			ft_putchar_fd(str[i], 1);
			i++;
			len++;
		}
	}
	va_end(args);
	return (len);
}
