/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   splitmain.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gharazka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 19:46:35 by gharazka          #+#    #+#             */
/*   Updated: 2023/10/26 19:56:11 by gharazka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	**words = ft_split("", ' ');
	int	i = 0;
	if (!words)
		printf("ok");
}
