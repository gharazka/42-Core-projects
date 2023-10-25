/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gharazka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 22:22:09 by gharazka          #+#    #+#             */
/*   Updated: 2023/10/24 19:32:40 by gharazka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct	s_list
{
	void	*content;
	struct s_list	*next;
}	t_list;

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
t_size	ft_strlcpy(char *dst, const char *src, t_size dstsize);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *c, int fd);
void	ft_putendl_fd(char *c, int fd);
void	ft_putnbr_fd(int nb, int fd);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	*ft_memset(void *s, int c, t_size n);
void	*ft_bzero(void *s, t_size n);
void	*ft_calloc(t_size nmemb, t_size size);
void	*ft_memchr(const void *s, int c, t_size n);
char	*ft_strdup(const char *s);
char	*ft_itoa(int n);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strnstr(const char *big, const char *little, t_size len);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, unsigned int start, t_size len);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	**ft_split(char const *s, char c);
t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int	ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif
