/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gharazka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 22:22:09 by gharazka          #+#    #+#             */
/*   Updated: 2023/10/19 22:02:22 by gharazka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef unsigned long int	t_size;
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_atoi(const char *str);
int		ft_strncmp(const char *s1, const char *s2, t_size n);
t_size	ft_strlen(const char *str);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *c, int fd);
void	ft_putendl_fd(char *c, int fd);
void	ft_putnbr_fd(int nb, int fd);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	*ft_memset(void *s, int c, t_size n);
void	*ft_bzero(void *s, t_size n);
void	*ft_memchr(const void *s, int c, t_size n);
char	*ft_strdup(const char *s);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strnstr(const char *big, const char *little, t_size len);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, unsigned int start, t_size len);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	**ft_split(char const *s, char c);

#endif
