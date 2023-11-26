/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gharazka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 20:50:04 by gharazka          #+#    #+#             */
/*   Updated: 2023/11/16 21:08:31 by gharazka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int		ft_printf(const char *str, ...);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *c, int fd);
void	ft_putnbr_fd(int nb, int fd);
void	ft_putunbr_fd(unsigned int nb, int fd);
void	ft_puthex_fd(unsigned long long int n, unsigned long int temp);
void	ft_putcaphex_fd(unsigned int n, int temp);
int		ft_hexlen(unsigned long long int n, unsigned long int temp, int len);
int		ft_numlen(int n);
int		ft_unumlen(unsigned int n);
int		ft_strlen(const char *str);
int		ft_putmemory_fd(unsigned long long int n);

#endif
