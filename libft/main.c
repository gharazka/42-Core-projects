/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gharazka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 21:34:14 by gharazka          #+#    #+#             */
/*   Updated: 2023/10/19 21:25:29 by gharazka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int	main(void)
{
	printf("ft_isalpha\n");
	printf("expected result: +i, got: %i\n", ft_isalpha('a'));
	printf("expected result: +i, got: %i\n", isalpha('a'));
	printf("expected result: 0, got: %i\n", ft_isalpha('@'));
	printf("expected result: 0, got: %i\n", isalpha('@'));
	printf("ft_isdigit\n");
	printf("expected result: +i, got: %i\n", ft_isdigit('0'));
	printf("expected result: +i, got: %i\n", isdigit('0'));
	printf("expected result: 0, got: %i\n", ft_isdigit(':'));
	printf("expected result: 0, got: %i\n", isdigit(':'));
	printf("ft_isalnum\n");
	printf("expected result: +i, got: %i\n", ft_isalnum('9'));
	printf("expected result: +i, got: %i\n", isalnum('9'));
	printf("expected result: 0, got: %i\n", ft_isalnum('`'));
	printf("expected result: 0, got: %i\n", isalnum('`'));
	printf("ft_isascii\n");
	printf("expected result: 1, got: %i\n", ft_isascii('\f'));
	printf("expected result: 1, got: %i\n", isascii('\f'));
	printf("expected result: 0, got: %i\n", ft_isascii(130));
	printf("expected result: 0, got: %i\n", isascii(130));
	printf("ft_isprint\n");
	printf("expected result: +i, got: %i\n", ft_isprint('f'));
	printf("expected result: +i, got: %i\n", isprint('f'));
	printf("expected result: 0, got: %i\n", ft_isprint('\f'));
	printf("expected result: 0, got: %i\n", isprint('\f'));
	printf("ft_strlen\n");
	printf("expected result: 8, got: %lu\n", ft_strlen("42prague"));
	printf("expected result: 8, got: %lu\n", strlen("42prague"));
	printf("expected result: 0, got: %lu\n", ft_strlen(""));
	printf("expected result: 0, got: %lu\n", strlen(""));
	printf("ft_toupper\n");
	printf("expected result: A, got: %c\n", ft_toupper('a'));
	printf("expected result: A, got: %c\n", toupper('a'));
	printf("expected result: 9, got: %c\n", ft_toupper('9'));
	printf("expected result: 9, got: %c\n", toupper('9'));
	printf("ft_tolower\n");
	printf("expected result: z, got: %c\n", ft_tolower('Z'));
	printf("expected result: z, got: %c\n", tolower('Z'));
	printf("expected result: 0, got: %c\n", ft_tolower('0'));
	printf("expected result: 0, got: %c\n", tolower('0'));
	printf("ft_putchar_fd\n");
	printf("expected result: c, got:\n");
	ft_putchar_fd('c', 1);
	ft_putchar_fd('\n', 1);
	printf("ft_putstr_fd\n");
	printf("expected result: abcd, got:\n");
	ft_putstr_fd("abcd\n", 1);
	printf("ft_putendl_fd\n");
	printf("expected result: 1030abcd, got:\n");
	ft_putendl_fd("1030abcd", 1);
	printf("ft_putnbr_fd\n");
	printf("expected result: 42, got:\n");
	ft_putnbr_fd(42, 1);
	ft_putchar_fd('\n', 1);
	printf("expected result: 0, got:\n");
	ft_putnbr_fd(0, 1);
	ft_putchar_fd('\n', 1);
	printf("expected result: -9, got:\n");
	ft_putnbr_fd(-9, 1);
	ft_putchar_fd('\n', 1);
	printf("expected result: -2147483648, got:\n");
	ft_putnbr_fd(-2147483648, 1);
	ft_putchar_fd('\n', 1);
	printf("expected result: 2147483647, got:\n");
	ft_putnbr_fd(2147483647, 1);
	ft_putchar_fd('\n', 1);
	printf("expected result: -2147483640, got:\n");
	ft_putnbr_fd(-2147483640, 1);
	ft_putchar_fd('\n', 1);
	printf("ft_strjoin\n");
	printf("expected result: HaBa, got: %s\n", ft_strjoin("Ha", "Ba"));
	printf("expected result: , got: %s\n", ft_strjoin("", ""));
	printf("expected result: ABCDEFGhijklmn, got: %s\n", ft_strjoin("ABCDEFG", "hijklmn"));
	printf("ft_strncmp\n");
	printf("expected result: 0, got: %i\n", ft_strncmp("ABCDef", "ABCDEF", 4));
	printf("expected result: 0, got: %i\n", strncmp("ABCDef", "ABCDEF", 4));
	printf("expected result: -i, got: %i\n", ft_strncmp("", "A", 4));
	printf("expected result: -i, got: %i\n", strncmp("", "A", 4));
	printf("ft_atoi\n");
	printf("expected result: 42, got: %i\n", ft_atoi("42"));
	printf("expected result: 42, got: %i\n", atoi("42"));
	printf("expected result: -42, got: %i\n", ft_atoi("-42"));
	printf("expected result: -42, got: %i\n", atoi("-42"));
	printf("expected result: 1234, got: %i\n", ft_atoi("1234 1"));
	printf("expected result: 1234, got: %i\n", atoi("1234 1"));
	printf("expected result: 1, got: %i\n", ft_atoi("  \t \n  1"));
	printf("expected result: 1, got: %i\n", atoi(" \t \n  1"));
	printf("expected result: -2147483648, got: %i\n", ft_atoi("-2147483648"));
	printf("expected result: -2147483648, got: %i\n", atoi("-2147483648"));
	printf("ft_split\n");
	printf("expected result: Ha Ba, got: %s\n", ft_split("Ha Ba", ' ')[1]);
	printf("expected result: , got: %s\n", ft_split("", ' ')[0]);
	printf("expected result: A B C D E F G, got: %s\n", ft_split("A B C D E F G", ' ')[6]);
	printf("ft_strchr\n");
	printf("expected result: Ha Ba, got: %s\n", ft_strchr("Ha Ba", ' '));
	printf("expected result: Ha Ba, got: %s\n", strchr("Ha Ba", ' '));
	printf("expected result: , got: %s\n", ft_strchr("", ' '));
	printf("expected result: , got: %s\n", strchr("", ' '));
	printf("expected result: A B C D E F G, got: %s\n", ft_strchr("A B C D E F G", 'B'));
	printf("expected result: A B C D E F G, got: %s\n", strchr("A B C D E F G", 'B'));
	printf("ft_strrchr\n");
	printf("expected result: h Bb, got: %s\n", ft_strrchr("Hh Bh Bb", 'h'));
	printf("expected result: h Bb, got: %s\n", strrchr("Hh Bh Bb", 'h'));
	printf("expected result: , got: %s\n", ft_strrchr("", ' '));
	printf("expected result: , got: %s\n", strrchr("", ' '));
	printf("expected result: B G, got: %s\n", ft_strrchr("A B C D E B G", 'B'));
	printf("expected result: B G, got: %s\n", strrchr("A B C D E B G", 'B'));
	printf("ft_substr\n");
	printf("expected result: HaBa, got: %s\n", ft_substr("HaBa", 0, 4));
	printf("expected result: , got: %s\n", ft_substr("abcd", 4, 0));
	printf("expected result: D E F, got: %s\n", ft_substr("A B C D E F G", 6, 5));
	
}
